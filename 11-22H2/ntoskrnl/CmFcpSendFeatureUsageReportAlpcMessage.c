/*
 * XREFs of CmFcpSendFeatureUsageReportAlpcMessage @ 0x14041980C
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     AlpcInitializeMessageAttribute @ 0x14032B870 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwAlpcDeletePortSection @ 0x14041B6A0 (ZwAlpcDeletePortSection.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041B820 (ZwAlpcSendWaitReceivePort.c)
 *     CmFcpCreateAlpcSectionView @ 0x140680D58 (CmFcpCreateAlpcSectionView.c)
 */

__int64 __fastcall CmFcpSendFeatureUsageReportAlpcMessage(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebx
  unsigned __int64 v8; // [rsp+40h] [rbp-49h] BYREF
  __int64 v9; // [rsp+48h] [rbp-41h] BYREF
  __int128 v10; // [rsp+50h] [rbp-39h] BYREF
  __int128 v11; // [rsp+60h] [rbp-29h]
  __int128 v12; // [rsp+70h] [rbp-19h]
  __int64 v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h] BYREF
  _OWORD v15[2]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+27h]

  v9 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v8 = 56LL;
  memset(v15, 0, sizeof(v15));
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v6 = AlpcInitializeMessageAttribute(0x40000000LL, v15, 0x28uLL, &v14);
  if ( v6 >= 0 )
  {
    v6 = CmFcpCreateAlpcSectionView(a1, a2, (unsigned int)(8 * a3), v15, &v9);
    if ( v6 >= 0 )
    {
      DWORD2(v11) = 0;
      WORD2(v10) = -32767;
      LODWORD(v10) = 3670032;
      DWORD2(v12) = 2;
      LODWORD(v13) = a3;
      v6 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, _OWORD *, __int128 *, unsigned __int64 *, _QWORD, _QWORD))ZwAlpcSendWaitReceivePort)(
             a1,
             0x20000LL,
             &v10,
             v15,
             &v10,
             &v8,
             0LL,
             0LL);
      if ( v6 >= 0 )
      {
        if ( v8 >= 0x30 && BYTE4(v10) == 2 )
        {
          v6 = 0;
          if ( v12 < 0 )
            v6 = HIDWORD(v12);
        }
        else
        {
          v6 = -1073741823;
        }
      }
    }
    if ( v9 )
      ZwAlpcDeletePortSection(a1, 0LL);
  }
  return (unsigned int)v6;
}

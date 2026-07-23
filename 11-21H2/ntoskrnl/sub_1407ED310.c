/*
 * XREFs of sub_1407ED310 @ 0x1407ED310
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14075CB14 @ 0x14075CB14 (sub_14075CB14.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 *     sub_1407ED3AC @ 0x1407ED3AC (sub_1407ED3AC.c)
 *     sub_1409655BC @ 0x1409655BC (sub_1409655BC.c)
 */

__int64 __fastcall sub_1407ED310(__int64 a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  v7 = sub_1407ED3AC(&v11, a1);
  if ( v7 >= 0 )
  {
    if ( (int)sub_14075CB14(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v12,
                &Handle) < 0
      || (v10 = (unsigned int)*a4, v7 = sub_1409655BC(Handle, a2, v10, (__int64)&v10), *a4 = v10, v7 == -1073741772) )
    {
      v7 = -1073741275;
    }
    else if ( v7 >= 0 )
    {
      v7 = 0;
      *a3 |= 0x10000000u;
    }
    if ( Handle )
    {
      ZwClose(Handle);
      _InterlockedIncrement(&dword_140C2A1BC);
    }
  }
  sub_14075CDC4((__int64)&v11);
  return (unsigned int)v7;
}

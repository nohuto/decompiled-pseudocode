/*
 * XREFs of HamConnectToServerEx @ 0x180003150
 * Callers:
 *     HamConnectToServer @ 0x180003120 (HamConnectToServer.c)
 *     sub_18001E9C0 @ 0x18001E9C0 (sub_18001E9C0.c)
 * Callees:
 *     sub_1800010E0 @ 0x1800010E0 (sub_1800010E0.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_18000145C @ 0x18000145C (sub_18000145C.c)
 *     sub_180005824 @ 0x180005824 (sub_180005824.c)
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 *     HamFreeBuffer_0 @ 0x180009A20 (HamFreeBuffer_0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall HamConnectToServerEx(__int64 a1, int a2, void *a3, _QWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v10; // ebx
  BOOL v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-31h] BYREF
  void *v20; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v21[2]; // [rsp+60h] [rbp-19h] BYREF

  if ( (unsigned int)dword_180032038 > 4 && sub_1800010E0((__int64)&dword_180032038, 1LL) )
    sub_1800011A0((__int64)&dword_180032038, byte_18002A926);
  v18 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( a1 )
  {
    v11 = a3 != 0LL;
    if ( v11 == (a4 != 0LL) && v11 == (a5 != 0LL) )
    {
      v19[1] = 0LL;
      v19[0] = a1;
      *(_QWORD *)&v21[0] = a3;
      v12 = sub_180005824((unsigned int)v19, (unsigned int)&unk_1800207D0, a2, (unsigned int)v21, (__int64)&v18);
      v13 = v18;
      v10 = v12;
      if ( v12 >= 0 )
      {
        if ( a4 )
        {
          *a4 = *(_QWORD *)(v18 + 144);
          *a5 = *(_DWORD *)(v13 + 152);
        }
        *a6 = v13;
        v13 = 0LL;
        v10 = 0;
      }
      if ( v13 )
        sub_180008C00(v13);
    }
    else
    {
      v10 = -1073741776;
    }
  }
  else
  {
    v10 = -1073741585;
  }
  if ( *((_QWORD *)&v21[0] + 1) )
    HamFreeBuffer_0();
  if ( (unsigned int)dword_180032038 > 4 && sub_1800010E0((__int64)&dword_180032038, 3LL) )
  {
    v19[0] = *a6;
    v20 = a3;
    LODWORD(v18) = v10;
    sub_18000145C(v14, byte_18002A86E, v15, v16, (__int64)&v18, (__int64)v19, &v20);
  }
  return v10;
}

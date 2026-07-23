/*
 * XREFs of sub_140632AC8 @ 0x140632AC8
 * Callers:
 *     sub_140231990 @ 0x140231990 (sub_140231990.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     sub_1402AE9D0 @ 0x1402AE9D0 (sub_1402AE9D0.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_14032BD70 @ 0x14032BD70 (sub_14032BD70.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406324DC @ 0x1406324DC (sub_1406324DC.c)
 */

void __fastcall sub_140632AC8(int a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v7; // rbx
  __int16 v8; // r15
  unsigned __int8 v9; // r12
  signed __int64 v10; // r8
  unsigned __int64 v11; // rbx
  int v12; // [rsp+30h] [rbp-50h]
  _QWORD v13[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+54h] [rbp-2Ch]
  __int64 v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+64h] [rbp-1Ch]
  _QWORD v19[2]; // [rsp+68h] [rbp-18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = __rdtsc();
  v8 = *((unsigned __int8 *)CurrentPrcb + 208);
  v9 = *((_BYTE *)CurrentPrcb + 209);
  ++*((_DWORD *)CurrentPrcb + 8796);
  LOWORD(v12) = v8;
  HIWORD(v12) = v9;
  v10 = sub_1406324DC(a2, a1 & 0xFFFF0000);
  if ( v10 )
  {
    ++*((_DWORD *)CurrentPrcb + 8797);
    if ( ((a1 - 65572) & 0xFFFFFFDF) != 0 )
    {
      if ( ((a1 - 66084) & 0xFFFFFFDF) == 0 )
      {
        if ( *(_DWORD *)(v10 + 32) == 4 && *(_WORD *)(v10 + 24) == v8 && *(_BYTE *)(v10 + 26) == v9 )
          v11 = v7 - *(_QWORD *)v10;
        else
          v11 = 0LL;
        if ( !(a3 % dword_140C0DA40) )
        {
          v13[0] = 0LL;
          v17 = a1;
          v16 = a2;
          v14 = a3;
          v13[1] = v11;
          v13[2] = *(_QWORD *)v10;
          v18 = 0;
          v19[1] = 48LL;
          v15 = *((_DWORD *)KeGetCurrentThread() + 308);
          v19[0] = v13;
          sub_14035EDE4((__int64)v19, 1u, 0x20020000u, 0x52Bu, 0x1501802u);
        }
      }
    }
    else
    {
      *(_DWORD *)(v10 + 24) = v12;
      *(_DWORD *)(v10 + 32) = 4;
      *(_QWORD *)v10 = v7;
    }
  }
}

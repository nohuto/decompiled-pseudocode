/*
 * XREFs of sub_14045FBE2 @ 0x14045FBE2
 * Callers:
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     sub_1402D43F4 @ 0x1402D43F4 (sub_1402D43F4.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_1403A06D0 @ 0x1403A06D0 (sub_1403A06D0.c)
 *     sub_140460150 @ 0x140460150 (sub_140460150.c)
 *     sub_14062D620 @ 0x14062D620 (sub_14062D620.c)
 *     sub_14062FB10 @ 0x14062FB10 (sub_14062FB10.c)
 *     sub_1406301D0 @ 0x1406301D0 (sub_1406301D0.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14045FBE2(unsigned __int16 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // ebx
  bool v8; // zf
  unsigned __int64 i; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+44h] [rbp-34h]
  __int64 v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+54h] [rbp-24h]

  v15 = a3;
  v16 = a4;
  v17 = 0;
  v7 = *(_DWORD *)(qword_140D05008 + 4248);
  v8 = !_BitScanForward((unsigned int *)&a3, v7);
  for ( i = a2; !v8; v8 = !_BitScanForward((unsigned int *)&a3, v7) )
  {
    v7 &= v7 - 1;
    v10 = 32 * a3 + qword_140D05008 + 4284;
    if ( v10 )
    {
      if ( ((unsigned int)i & *(_DWORD *)(v10 + 4 * (i >> 29)) & 0x1FFFFFFF) != 0 )
      {
        v11 = *(unsigned __int8 *)(qword_140D05008 + 2 * a3 + 4233);
        v14 = 0;
        v13 = 8;
        v12 = a6 + 8 * (v11 - 1);
        sub_1402AB170((__int64)&v12, qword_140D05008, *(unsigned __int8 *)(qword_140D05008 + 2 * a3 + 4232), 2u, a1, a5);
      }
    }
  }
}

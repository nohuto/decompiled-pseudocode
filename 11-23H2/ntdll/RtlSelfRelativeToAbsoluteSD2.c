/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x18008A1A0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18006C714 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     RtlpQuerySecurityDescriptor @ 0x18006CF94 (RtlpQuerySecurityDescriptor.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlSelfRelativeToAbsoluteSD2(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v15; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v22; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( *a2 < 0x14 )
    return 3221225485LL;
  if ( *(__int16 *)(a1 + 2) >= 0 )
    return 3221225703LL;
  RtlpQuerySecurityDescriptor(a1, &v16, &v20, &v17, &v21, &v18, &v22, &v19, &v15);
  v5 = v16;
  v6 = v17;
  if ( v16 > v17 )
    v7 = v16 + v20;
  else
    v7 = v17 + v21;
  v8 = v18;
  if ( v7 <= v18 )
    v7 = v18 + v22;
  v9 = v19;
  if ( v7 <= v19 )
    v7 = v19 + v15;
  v10 = 40;
  if ( v7 )
    v10 = ((v7 - a1 - 13) & 0xFFFFFFF8) + 40;
  if ( v10 > *a2 )
  {
    *a2 = v10;
    return 3221225507LL;
  }
  else
  {
    if ( v7 )
      memmove((void *)(a1 + 40), (const void *)(a1 + 20), v10 - 40LL);
    *(_WORD *)(a1 + 2) &= ~0x8000u;
    v11 = v5 + 20;
    if ( !v5 )
      v11 = 0LL;
    *(_QWORD *)(a1 + 8) = v11;
    v12 = v6 + 20;
    if ( !v6 )
      v12 = 0LL;
    *(_QWORD *)(a1 + 16) = v12;
    v13 = v9 + 20;
    if ( !v9 )
      v13 = 0LL;
    *(_QWORD *)(a1 + 24) = v13;
    if ( v8 )
      v2 = v8 + 20;
    *(_QWORD *)(a1 + 32) = v2;
    return 0LL;
  }
}

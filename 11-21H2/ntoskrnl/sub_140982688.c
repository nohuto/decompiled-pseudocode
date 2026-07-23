/*
 * XREFs of sub_140982688 @ 0x140982688
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     sub_14056D710 @ 0x14056D710 (sub_14056D710.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14096DE64 @ 0x14096DE64 (sub_14096DE64.c)
 *     sub_14096DEDC @ 0x14096DEDC (sub_14096DEDC.c)
 *     sub_14096DF60 @ 0x14096DF60 (sub_14096DF60.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 */

__int64 __fastcall sub_140982688(__int64 *a1, __int64 *a2, __int64 a3, KPROCESSOR_MODE a4)
{
  __int64 v4; // r15
  __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned __int16 v11; // ax
  int v12; // edi
  bool v13; // zf
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // esi
  __int64 *v17; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int64 *v18; // [rsp+78h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = 0LL;
  v6 = *(_QWORD *)a3;
  v18 = 0LL;
  v8 = *a1;
  v17 = 0LL;
  if ( !v6 )
    return 0LL;
  v10 = *(_DWORD *)(a3 + 8);
  if ( v10 == -1 )
  {
    v11 = sub_14056D710((__int64)KeGetCurrentThread());
    v5 = v17;
    v10 = v11;
  }
  else if ( v10 >= (unsigned __int16)word_140D05000 )
  {
    return 3221225485LL;
  }
  v12 = *(_DWORD *)(a3 + 12);
  if ( (v12 & 0xFFFFF000) != 0 )
    return 3221225485LL;
  if ( (v12 & 0x400) != 0 )
  {
    if ( v4 != v8 || v6 != 0x40000 || (*(_DWORD *)(a3 + 12) & 0xA00) == 0x800 )
      return 3221225485LL;
  }
  else if ( (v12 & 0x800) != 0 )
  {
    return 3221225485LL;
  }
  if ( (v12 & 0x200) != 0 )
  {
    if ( (v12 & 0x100) == 0 || (v12 & 0xFFFFF0F6) != 0 )
      return 3221225485LL;
    if ( (v12 & 0x400) == 0 )
      goto LABEL_21;
    v13 = (v12 & 8) == 0;
  }
  else
  {
    if ( (v12 & 0x400) == 0 )
      goto LABEL_21;
    v13 = (v12 & 0xFFFFFA7E) == 0;
  }
  if ( !v13 || (v12 & 0x180) == 0 )
    return 3221225485LL;
LABEL_21:
  if ( (v12 & 0x12) != 0 )
  {
    v14 = (*(_DWORD *)(a3 + 12) & 0x1E0) == 0;
LABEL_27:
    if ( !v14 || (v6 & 0x1FF) != 0 )
      return 3221225485LL;
    goto LABEL_33;
  }
  if ( (v12 & 0x60) != 0 )
  {
    v14 = (*(_DWORD *)(a3 + 12) & 0x180) == 0;
    goto LABEL_27;
  }
  if ( (v12 & 0x180) != 0 )
  {
    if ( !_bittest64(&qword_140D068D8, 0x25u) )
      return 3221225659LL;
    if ( (v6 & 0x3FFFF) != 0 )
      return 3221225485LL;
  }
LABEL_33:
  if ( (v12 & 8) != 0 )
  {
    if ( (ULONG_PTR *)v8 == &StartContext && ((ULONG_PTR *)v4 != &StartContext || (v12 & 0x200) != 0) )
    {
      if ( !SeSinglePrivilegeCheck(stru_140D3CA80, a4) )
        return 3221225569LL;
      goto LABEL_39;
    }
    return 3221225485LL;
  }
LABEL_39:
  if ( _bittest((const signed __int32 *)(v8 + 4), 8u) )
    return 3221225659LL;
  if ( !_bittest((const signed __int32 *)(v4 + 4), 8u) )
    goto LABEL_44;
  if ( (v12 & 0xFFFFFE08) != 0 )
    return 3221225659LL;
  result = sub_14096DF60(v8, (const void *)(v4 + 16640), &v17, &v18);
  if ( (int)result < 0 )
    return result;
  v5 = v17;
  v8 = *v17;
  do
  {
LABEL_44:
    v15 = sub_1409811F0((ULONG_PTR *)v4, v8, *(_QWORD *)a3, v10, v12, 0);
    v16 = v15;
  }
  while ( v15 == -1073740023 );
  if ( _bittest((const signed __int32 *)(v8 + 4), 8u) )
  {
    sub_14096DEDC(v5, &v18, v15);
    sub_14096DE64((__int64)v5, &v18);
  }
  return v16;
}

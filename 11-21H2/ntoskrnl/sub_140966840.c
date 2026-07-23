/*
 * XREFs of sub_140966840 @ 0x140966840
 * Callers:
 *     sub_140966A84 @ 0x140966A84 (sub_140966A84.c)
 * Callees:
 *     <none>
 */

__int64 sub_140966840()
{
  __int64 result; // rax
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD **v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rcx

  while ( 1 )
  {
    result = qword_140C2A140;
    if ( (__int64 *)qword_140C2A140 != &qword_140C2A140 )
      break;
    v1 = qword_140C2A120;
    if ( (__int64 *)qword_140C2A120 == &qword_140C2A120 )
      return 0LL;
    if ( *(__int64 **)(qword_140C2A120 + 8) != &qword_140C2A120 )
      goto LABEL_19;
    v2 = *(_QWORD *)qword_140C2A120;
    if ( *(_QWORD *)(*(_QWORD *)qword_140C2A120 + 8LL) != qword_140C2A120 )
      goto LABEL_19;
    qword_140C2A120 = *(_QWORD *)qword_140C2A120;
    *(_QWORD *)(v2 + 8) = &qword_140C2A120;
    *(_DWORD *)(v1 + 44) = 0;
    v3 = *(_QWORD *)(v1 + 16);
    if ( *(_QWORD *)(v3 + 8) != v1 + 16 )
      goto LABEL_19;
    v4 = *(_QWORD **)(v1 + 24);
    if ( *v4 != v1 + 16 )
      goto LABEL_19;
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = (_QWORD **)(v1 + 48);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (_QWORD **)v6[1] != v5 )
        goto LABEL_19;
      v7 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_19;
      *v5 = v7;
      v7[1] = v5;
      v8 = (_QWORD *)qword_140C2A148;
      if ( *(__int64 **)qword_140C2A148 != &qword_140C2A140 )
        goto LABEL_19;
      *v6 = &qword_140C2A140;
      v6[1] = v8;
      *v8 = v6;
      qword_140C2A148 = (__int64)v6;
    }
    v9 = (__int64 *)qword_140C2A138;
    if ( *(__int64 **)qword_140C2A138 != &qword_140C2A130 )
      goto LABEL_19;
    *(_QWORD *)v1 = &qword_140C2A130;
    *(_QWORD *)(v1 + 8) = v9;
    *v9 = v1;
    qword_140C2A138 = v1;
  }
  v10 = *(_QWORD *)qword_140C2A140;
  if ( *(__int64 **)(qword_140C2A140 + 8) != &qword_140C2A140 || *(_QWORD *)(v10 + 8) != qword_140C2A140 )
LABEL_19:
    __fastfail(3u);
  qword_140C2A140 = *(_QWORD *)qword_140C2A140;
  *(_QWORD *)(v10 + 8) = &qword_140C2A140;
  return result;
}

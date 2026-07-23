/*
 * XREFs of sub_14096675C @ 0x14096675C
 * Callers:
 *     sub_140966950 @ 0x140966950 (sub_140966950.c)
 * Callees:
 *     <none>
 */

__int64 sub_14096675C()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  _QWORD *v3; // rdx
  _QWORD **v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // r8
  __int64 v8; // rcx

  result = qword_140C2A130;
  if ( (__int64 *)qword_140C2A130 != &qword_140C2A130 )
  {
    v8 = *(_QWORD *)qword_140C2A130;
    if ( *(__int64 **)(qword_140C2A130 + 8) == &qword_140C2A130 && *(_QWORD *)(v8 + 8) == qword_140C2A130 )
    {
      qword_140C2A130 = *(_QWORD *)qword_140C2A130;
      *(_QWORD *)(v8 + 8) = &qword_140C2A130;
      return result;
    }
    goto LABEL_18;
  }
  result = qword_140C2A120;
  if ( (__int64 *)qword_140C2A120 == &qword_140C2A120 )
    return 0LL;
  v1 = *(_QWORD *)qword_140C2A120;
  if ( *(__int64 **)(qword_140C2A120 + 8) != &qword_140C2A120
    || *(_QWORD *)(v1 + 8) != qword_140C2A120
    || (qword_140C2A120 = *(_QWORD *)qword_140C2A120,
        *(_QWORD *)(v1 + 8) = &qword_140C2A120,
        *(_DWORD *)(result + 44) = 0,
        v2 = *(_QWORD *)(result + 16),
        *(_QWORD *)(v2 + 8) != result + 16)
    || (v3 = *(_QWORD **)(result + 24), *v3 != result + 16) )
  {
LABEL_18:
    __fastfail(3u);
  }
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = (_QWORD **)(result + 48);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      return result;
    if ( (_QWORD **)v5[1] != v4 )
      goto LABEL_18;
    v6 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto LABEL_18;
    *v4 = v6;
    v6[1] = v4;
    v7 = (_QWORD *)qword_140C2A148;
    if ( *(__int64 **)qword_140C2A148 != &qword_140C2A140 )
      goto LABEL_18;
    *v5 = &qword_140C2A140;
    v5[1] = v7;
    *v7 = v5;
    qword_140C2A148 = (__int64)v5;
  }
}

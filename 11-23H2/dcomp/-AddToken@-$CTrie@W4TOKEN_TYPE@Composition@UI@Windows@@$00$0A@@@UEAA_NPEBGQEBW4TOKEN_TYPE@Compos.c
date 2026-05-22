/*
 * XREFs of ?AddToken@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAA_NPEBGQEBW4TOKEN_TYPE@Composition@UI@Windows@@@Z @ 0x180074270
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::AddToken(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int16 v10; // si
  __int64 v11; // r15
  HANDLE ProcessHeap; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int16 v15; // cx
  __int16 v16; // cx
  char result; // al
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a1;
  if ( !a3 || !a2 || !*a2 )
    return 0;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v7 = (_QWORD *)(a1 + 8);
  v8 = 0LL;
  if ( v6 )
  {
    do
    {
      v9 = v7[2];
      v10 = _o_towlower((unsigned __int16)a2[v8], v4);
      v11 = a3;
      if ( v8 != v6 - 1 )
        v11 = 0LL;
      if ( !v9 )
        goto LABEL_12;
      while ( *(_WORD *)(v9 + 32) < v10 )
      {
        v9 = *(_QWORD *)(v9 + 8);
        if ( !v9 )
          goto LABEL_12;
      }
      if ( *(_WORD *)(v9 + 32) <= v10 )
      {
        if ( v11 && !*(_QWORD *)(v9 + 24) )
          *(_QWORD *)(v9 + 24) = v11;
        v7 = (_QWORD *)v9;
      }
      else
      {
LABEL_12:
        ProcessHeap = GetProcessHeap();
        v13 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
        if ( !v13 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        *v13 = v7;
        v13[1] = 0LL;
        v4 = 0LL;
        v13[2] = 0LL;
        *((_WORD *)v13 + 17) = 0;
        v13[3] = v11;
        *((_WORD *)v13 + 16) = v10;
        v14 = v7[2];
        if ( !v14 )
          goto LABEL_14;
        do
        {
          if ( *(_WORD *)(v14 + 32) >= v10 )
            break;
          v4 = v14;
          v14 = *(_QWORD *)(v14 + 8);
        }
        while ( v14 );
        if ( v4 )
          *(_QWORD *)(v4 + 8) = v13;
        else
LABEL_14:
          v7[2] = v13;
        v13[1] = v14;
        v15 = *((_WORD *)v13 + 16);
        if ( *((_WORD *)v7 + 17) < v15 )
          *((_WORD *)v7 + 17) = v15;
        v7 = v13;
      }
      ++v8;
    }
    while ( v8 < v6 );
    v4 = a1;
  }
  v16 = *(_WORD *)(*(_QWORD *)(v4 + 24) + 32LL);
  *(_WORD *)(v4 + 50) = *(_WORD *)(v4 + 42);
  result = 1;
  *(_WORD *)(v4 + 48) = v16;
  return result;
}

/*
 * XREFs of sub_14055D6F4 @ 0x14055D6F4
 * Callers:
 *     sub_140553F1C @ 0x140553F1C (sub_140553F1C.c)
 * Callees:
 *     sub_140554ED0 @ 0x140554ED0 (sub_140554ED0.c)
 */

__int64 __fastcall sub_14055D6F4(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 result; // rax
  unsigned int v8; // r9d
  __int64 v11; // r10
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned int v14; // esi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r9
  unsigned __int64 *v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // [rsp+28h] [rbp-30h]

  result = a5;
  v8 = 0;
  v11 = a1;
  if ( a5 )
  {
    v12 = qword_140C54E80;
    v13 = a4 + a5 - 1;
    if ( qword_140C54E80 )
    {
      v14 = 0;
      if ( *(_DWORD *)qword_140C54E80 )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v12 + 16LL * v14 + 8);
          v16 = v15 + *(_QWORD *)(v12 + 16LL * v14 + 16);
          v17 = v16 - 1;
          if ( a4 <= v15 )
            break;
          if ( a4 <= v17 )
          {
            if ( v13 <= v17 )
              return v8;
LABEL_10:
            a4 = v16;
          }
LABEL_11:
          v12 = qword_140C54E80;
          if ( ++v14 >= *(_DWORD *)qword_140C54E80 )
            goto LABEL_12;
        }
        v22 = a6;
        v18 = a4;
        v19 = a3;
        v20 = v11;
        if ( v13 < v15 )
          return sub_140554ED0(v20, a2, v19, v18, v13 - a4 + 1, v22);
        v21 = sub_140554ED0(v11, a2, a3, a4, v15 - a4, a6);
        v11 = a1;
        v8 = v21;
        if ( v13 <= v17 )
          goto LABEL_11;
        goto LABEL_10;
      }
    }
LABEL_12:
    v22 = a6;
    v18 = a4;
    v19 = a3;
    v20 = v11;
    return sub_140554ED0(v20, a2, v19, v18, v13 - a4 + 1, v22);
  }
  return result;
}

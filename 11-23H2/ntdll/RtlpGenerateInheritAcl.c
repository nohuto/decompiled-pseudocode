/*
 * XREFs of RtlpGenerateInheritAcl @ 0x180019F18
 * Callers:
 *     RtlpInheritAcl2 @ 0x180018114 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x180015510 (RtlFindAceByType.c)
 *     RtlpGenerateInheritedAce @ 0x18001A100 (RtlpGenerateInheritedAce.c)
 */

__int64 __fastcall RtlpGenerateInheritAcl(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        char a12,
        _DWORD *a13,
        PACL Acl,
        _BYTE *a15)
{
  _BYTE *v15; // r12
  char v17; // si
  int v18; // edi
  unsigned int v19; // ebx
  unsigned int v20; // r15d
  unsigned __int16 *v21; // rbp
  ACL *v22; // r13
  __int64 result; // rax
  __int64 v24[11]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+8h] BYREF
  char v26; // [rsp+D8h] [rbp+10h]
  char v27; // [rsp+E0h] [rbp+18h]
  __int64 v28; // [rsp+E8h] [rbp+20h]

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v15 = a15;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = (unsigned __int16 *)(a1 + 8);
  *a15 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v22 = Acl;
    while ( 1 )
    {
      if ( *(_BYTE *)v21 == 17 )
      {
        if ( a11 == 3 )
        {
          if ( RtlFindAceByType(v22, 0x11u, 0LL) )
          {
LABEL_13:
            if ( !v17 )
              break;
LABEL_21:
            result = 3221225507LL;
            *a13 = v19 + v18;
            return result;
          }
LABEL_5:
          result = RtlpGenerateInheritedAce(
                     v21,
                     a5,
                     a6,
                     a7,
                     a8,
                     a9,
                     a10,
                     (__int64)v24,
                     v22,
                     (__int64)&v25,
                     (__int64)&a15);
          if ( (_DWORD)result == -1073741789 )
          {
            v17 = 1;
          }
          else if ( (int)result < 0 )
          {
            return result;
          }
          if ( (_BYTE)a15 )
            *v15 = 1;
          v18 += LODWORD(v24[0]);
          if ( LODWORD(v24[0]) > v19 || (v19 -= LODWORD(v24[0]), v19 <= (unsigned int)v25) )
            v19 = v25;
        }
      }
      else if ( a11 != 3 )
      {
        goto LABEL_5;
      }
      ++v20;
      v21 = (unsigned __int16 *)((char *)v21 + v21[1]);
      if ( v20 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
  }
  if ( a12 )
    goto LABEL_21;
  *a13 = v18;
  return 0LL;
}

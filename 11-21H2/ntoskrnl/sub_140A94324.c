/*
 * XREFs of sub_140A94324 @ 0x140A94324
 * Callers:
 *     sub_140A93724 @ 0x140A93724 (sub_140A93724.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A93C34 @ 0x140A93C34 (sub_140A93C34.c)
 *     sub_140A9445C @ 0x140A9445C (sub_140A9445C.c)
 *     sub_140A944BC @ 0x140A944BC (sub_140A944BC.c)
 */

__int64 __fastcall sub_140A94324(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 i; // r15
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  int v12; // ebp
  unsigned int v13; // eax

  v3 = 0;
  v4 = a2;
  v6 = a1;
  if ( !a3 || dword_140C1ACA4 )
    v7 = 0LL;
  else
    v7 = sub_140A93C34(a1, a2);
  if ( (_DWORD)v4 )
  {
    for ( i = v4; i; --i )
    {
      if ( dword_140C1ACA4 )
      {
        v9 = sub_140A944BC(v6, &off_140D4E690);
      }
      else
      {
        v10 = sub_140A944BC(v6, &off_140D4E690);
        if ( v10 )
          goto LABEL_21;
        v10 = sub_140A944BC(v6, &off_140D4E190);
        if ( v10 )
          goto LABEL_21;
        v10 = sub_140A944BC(v6, &off_140D4F470);
        if ( v10 )
          goto LABEL_21;
        v10 = sub_140A944BC(v6, &off_140D50040);
        if ( v10 )
          goto LABEL_21;
        if ( v7 )
        {
          v11 = *v7;
          v12 = 0;
          while ( v11 )
          {
            v10 = sub_140A9445C(v11 + 24, v6);
            if ( v10 )
              goto LABEL_21;
            v11 = v7[++v12];
          }
        }
        if ( !a3 )
          goto LABEL_21;
        v9 = sub_140A9445C(&xmmword_140C1B2B0, v6);
      }
      v10 = v9;
LABEL_21:
      v13 = v3 + 1;
      if ( !v10 )
        v13 = v3;
      v6 += 8LL;
      v3 = v13;
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v3;
}

/*
 * XREFs of sub_140391464 @ 0x140391464
 * Callers:
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 *     sub_140A62458 @ 0x140A62458 (sub_140A62458.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140391464(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 **v5; // r11
  __int64 *i; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v2 = sub_14042A5E0(a1, a2);
  LODWORD(v2) = HIDWORD(KeGetPcr()[1].LockArray);
  v4 = 3 * v2;
  v5 = (__int64 **)(qword_140C4D0B8 + 24 * v2);
  for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
  {
    v8 = 0LL;
    if ( *((_DWORD *)i + 5) )
    {
      while ( 1 )
      {
        v9 = 5 * v8;
        v3 = HIDWORD(i[5 * v8 + 5]);
        if ( !(_DWORD)v3 )
          break;
        v3 = (unsigned int)(v3 - 1);
        if ( (_DWORD)v3 )
        {
          if ( (_DWORD)v3 != 1 )
            break;
          v3 = LODWORD(i[5 * v8 + 6]);
          v10 = __readmsr(v3);
          LODWORD(v11) = HIDWORD(v10);
          v10 = (unsigned int)v10;
          v11 = (unsigned int)v11;
        }
        else
        {
          v3 = LODWORD(i[5 * v8 + 6]);
          v10 = __readpmc(v3);
          LODWORD(v11) = HIDWORD(v10);
          v10 = (unsigned int)v10;
          v11 = (unsigned int)v11;
        }
        v4 = v11 << 32;
        v12 = v4 | v10;
LABEL_12:
        v8 = (unsigned int)(v8 + 1);
        i[v9 + 3] = v12;
        if ( (unsigned int)v8 >= *((_DWORD *)i + 5) )
          goto LABEL_13;
      }
      v12 = 0LL;
      goto LABEL_12;
    }
LABEL_13:
    ;
  }
  LOBYTE(v3) = 1;
  return sub_14042A5E0(v3, v4);
}

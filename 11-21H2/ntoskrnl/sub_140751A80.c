/*
 * XREFs of sub_140751A80 @ 0x140751A80
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D5E5C @ 0x1402D5E5C (sub_1402D5E5C.c)
 *     sub_1402D5EE4 @ 0x1402D5EE4 (sub_1402D5EE4.c)
 *     sub_140389874 @ 0x140389874 (sub_140389874.c)
 *     sub_140752664 @ 0x140752664 (sub_140752664.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140751A80()
{
  __int64 v0; // rdi
  _DWORD *v1; // rbx
  __int64 v2; // r14
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdi
  char v8; // al
  _QWORD *v9; // rdx
  __int64 v10; // r8
  char v11; // cl
  _QWORD *v13; // rax

  sub_1402D5E5C(0);
  sub_1402D5EE4(1);
  v0 = dword_140C232CC;
  ExAcquireFastMutex(&stru_140C237C0);
  v1 = qword_140C22420;
  if ( qword_140C22420 != &qword_140C22420 )
  {
    v2 = v0;
    while ( 1 )
    {
      v3 = v1 + 4;
      v4 = *((_QWORD *)v1 + 2);
      while ( (_QWORD *)v4 != v3 )
      {
        if ( *(_BYTE *)(v4 + 104) )
        {
          v4 = *(_QWORD *)v4;
        }
        else
        {
          *(_BYTE *)(v4 + 104) = 1;
          if ( *(_QWORD *)(v4 + 72) != *(_QWORD *)&v1[2 * v2 + 16] )
            sub_140752664(v4);
          v5 = *(_QWORD *)v4;
          *(_BYTE *)(v4 + 104) = 0;
          if ( *(_BYTE *)(v4 + 33) || *(_BYTE *)(v4 + 32) )
            sub_140389874((__int64 *)v4);
          v4 = v5;
        }
      }
      if ( (_QWORD *)*v3 != v3 || v1[14] || v1[15] )
      {
        v6 = *(_QWORD *)v1;
      }
      else
      {
        v8 = 1;
        v9 = v1 + 16;
        v10 = 3LL;
        do
        {
          v11 = 0;
          if ( *v9++ == 0LL )
            v11 = v8;
          v8 = v11;
          --v10;
        }
        while ( v10 );
        v6 = *(_QWORD *)v1;
        if ( v11 )
        {
          if ( *(_DWORD **)(v6 + 8) != v1 || (v13 = (_QWORD *)*((_QWORD *)v1 + 1), (_DWORD *)*v13 != v1) )
            __fastfail(3u);
          *v13 = v6;
          *(_QWORD *)(v6 + 8) = v13;
          ExFreePoolWithTag(v1, 0x74655350u);
        }
      }
      if ( (PVOID *)v6 == &qword_140C22420 )
        break;
      v1 = (_DWORD *)v6;
    }
  }
  KeReleaseGuardedMutex(&stru_140C237C0);
  return sub_1402D5EE4(0);
}

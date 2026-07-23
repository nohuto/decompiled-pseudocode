/*
 * XREFs of sub_140A8A0C8 @ 0x140A8A0C8
 * Callers:
 *     sub_140A7C224 @ 0x140A7C224 (sub_140A7C224.c)
 *     sub_140B536A4 @ 0x140B536A4 (sub_140B536A4.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     strcmp @ 0x1403E2AE0 (strcmp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_1405FEED0 @ 0x1405FEED0 (sub_1405FEED0.c)
 *     sub_140A8A2D8 @ 0x140A8A2D8 (sub_140A8A2D8.c)
 */

char __fastcall sub_140A8A0C8(__int64 a1)
{
  char *v1; // r14
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  char *v5; // r15
  char v6; // bl
  const char *v7; // rbp
  __int64 v8; // rax
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(char **)(a1 + 48);
  v2 = RtlImageDirectoryEntryToData(v1, 1u, 0, &v13);
  v3 = v2;
  if ( v2 && v2[6] )
  {
    v4 = 0LL;
    v5 = &v1[v2[8]];
    v6 = 1;
    while ( 1 )
    {
      v7 = &v1[*(unsigned int *)&v5[4 * v4]];
      if ( !strcmp("SetXdvKernelUtilities", v7) )
      {
        v8 = sub_140A8A2D8(v1, v3, (unsigned int)v4);
        if ( !v8 )
        {
          sub_1405FDF9C("Error on getting XDV utility routine.\n");
          goto LABEL_23;
        }
        if ( !sub_1405FEED0(v8) )
        {
          sub_1405FDF9C("Error on binding utility functions.\n");
LABEL_23:
          v6 = 0;
        }
      }
      else
      {
        if ( !strcmp("XdvHibernationNotification", v7) )
        {
          v9 = (void *)sub_140A8A2D8(v1, v3, (unsigned int)v4);
          qword_140D575D0 = v9;
LABEL_26:
          v6 = v9 != 0LL ? v6 : 0;
          goto LABEL_27;
        }
        if ( !strcmp("XdvNotifyExtensions", v7) )
        {
          v9 = (void *)sub_140A8A2D8(v1, v3, (unsigned int)v4);
          qword_140D57668 = (__int64)v9;
          goto LABEL_26;
        }
        if ( !strcmp("XdvQueryDispatchTable", v7) )
        {
          qword_140D57628 = sub_140A8A2D8(v1, v3, (unsigned int)v4);
          if ( !qword_140D57628 )
          {
            sub_1405FDF9C("Error on binding XdvQueryDispatchTable.\n");
            goto LABEL_23;
          }
          qword_140D57778 = sub_14042A5E0(4LL, 32LL);
          if ( !qword_140D57778 )
          {
            sub_1405FDF9C("Error on binding TiP utilities.\n");
            goto LABEL_23;
          }
        }
        else if ( !strcmp("XdvLoadDifPlugins", v7) )
        {
          if ( (qword_140D01450 & 0x800000000LL) != 0 )
          {
            qword_140D576D0 = sub_140A8A2D8(v1, v3, (unsigned int)v4);
            if ( !qword_140D576D0 )
            {
              sub_1405FDF9C("Error on calling XDV DIF plugins.\n");
              goto LABEL_23;
            }
            sub_14042A5E0(v11, v10);
          }
        }
        else if ( !strcmp("AutoFailInject", v7) )
        {
          v9 = (void *)sub_140A8A2D8(v1, v3, (unsigned int)v4);
          qword_140D57510 = (__int64)v9;
          goto LABEL_26;
        }
      }
LABEL_27:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3[6] )
        return v6;
    }
  }
  return 0;
}

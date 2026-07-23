/*
 * XREFs of sub_140AF9858 @ 0x140AF9858
 * Callers:
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 * Callees:
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_1403BF088 @ 0x1403BF088 (sub_1403BF088.c)
 *     strcmp @ 0x1403E2AE0 (strcmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     KeFindConfigurationNextEntry @ 0x140AF9950 (KeFindConfigurationNextEntry.c)
 */

__int64 __fastcall sub_140AF9858(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 ConfigurationNextEntry; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  unsigned int v11; // r14d
  void *v12; // rax
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v2 = qword_140C54958;
  v3 = 0;
  v14 = 0LL;
  if ( qword_140C54958 )
  {
LABEL_8:
    *a2 = v2;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 176);
    v15 = 0LL;
    v7 = &v15;
    while ( 1 )
    {
      ConfigurationNextEntry = KeFindConfigurationNextEntry(v6, 3, 12, 0, (__int64)v7);
      v9 = ConfigurationNextEntry;
      if ( !ConfigurationNextEntry )
      {
        DbgPrint("**** HalpAcpiFindRsdp: Could not find RSDP\n");
        return (unsigned int)-1073741275;
      }
      if ( !strcmp(*(const char **)(ConfigurationNextEntry + 56), "ACPI BIOS") )
        break;
      v6 = *(_QWORD *)(a1 + 176);
      v7 = &v14;
      v14 = v9;
    }
    v10 = *(_QWORD *)(v9 + 64);
    v11 = 24 * *(_DWORD *)(v10 + 36) + 16;
    v12 = (void *)sub_1403BF088(a1, v11);
    qword_140C54958 = (__int64)v12;
    v2 = (__int64)v12;
    if ( v12 )
    {
      memmove(v12, (const void *)(v10 + 28), v11);
      goto LABEL_8;
    }
    return (unsigned int)-1073741670;
  }
  return v3;
}

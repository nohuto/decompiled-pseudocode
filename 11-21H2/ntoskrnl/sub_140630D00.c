/*
 * XREFs of sub_140630D00 @ 0x140630D00
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1406EC9F8 @ 0x1406EC9F8 (sub_1406EC9F8.c)
 *     sub_1406EF020 @ 0x1406EF020 (sub_1406EF020.c)
 *     sub_1406EF140 @ 0x1406EF140 (sub_1406EF140.c)
 *     sub_1406EF280 @ 0x1406EF280 (sub_1406EF280.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1409E0AEC @ 0x1409E0AEC (sub_1409E0AEC.c)
 */

__int64 __fastcall sub_140630D00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // rbx
  int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // eax
  int *v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  v18 = 0LL;
  result = sub_1406EF140(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v9 = sub_1406EF020(v6, v5, &v18);
    if ( v9 < 0 )
    {
LABEL_20:
      sub_1402F9540((__int64)KeGetCurrentThread());
      return (unsigned int)v9;
    }
    v10 = v18;
    v11 = *(_DWORD *)(v18 + 12);
    if ( (v11 & 0x540) != 0 )
    {
      v9 = -1073741637;
    }
    else
    {
      v9 = sub_14079435C(0xA0u);
      if ( v9 >= 0 )
      {
        sub_1406EC9F8(v10, 4100LL);
        if ( *(_QWORD *)(v10 + 800) )
        {
          v9 = -1073741823;
          if ( *(_DWORD *)(v10 + 40) )
            v9 = *(_DWORD *)(v10 + 40);
          goto LABEL_19;
        }
        RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 152));
        RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 168));
        RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 184));
        v12 = v11 & 0xFBFFFCD0 | 0x100;
        v13 = v11 & 0xFBFFFCC0 | 0x110;
        v14 = v12 & 0xFFFFFFEF;
        if ( (*(_DWORD *)(a2 + 64) & 0x10) == 0 )
          v13 = v14;
        v15 = (int *)(v10 + 208);
        *(_DWORD *)(v10 + 12) = v13;
        v16 = *(_DWORD *)(a2 + 68);
        if ( !v16 )
        {
          if ( *v15 )
            goto LABEL_16;
          v16 = 1000;
          if ( (v13 & 0x10) == 0 )
            v16 = 1;
        }
        *v15 = v16;
        sub_1406EC9F8(v10, 4LL);
LABEL_16:
        v9 = sub_1406EF280(a2, v10);
        if ( EtwEventEnabled(qword_140C15FA8, &stru_14000EEB0) )
          sub_1409E0AEC(v17, &stru_14000EEB0, v10);
      }
    }
LABEL_19:
    LOBYTE(v8) = 1;
    sub_1407981E8(v10, v8);
    goto LABEL_20;
  }
  return result;
}

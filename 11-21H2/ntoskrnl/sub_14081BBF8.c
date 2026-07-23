/*
 * XREFs of sub_14081BBF8 @ 0x14081BBF8
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     sub_1402D8E00 @ 0x1402D8E00 (sub_1402D8E00.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

void __fastcall sub_14081BBF8(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // rsi
  char *v7; // rdx
  __int64 v8; // rax
  UNICODE_STRING *v9; // rbx
  wchar_t *v10; // rax

  v3 = a3;
  if ( *(_WORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    v7 = (char *)qword_140C29CA8;
    if ( qword_140C29CA8 )
    {
      v8 = (unsigned int)dword_140C29CA0;
      if ( (unsigned int)dword_140C29CA0 < 0x32 )
        goto LABEL_4;
    }
    else
    {
      qword_140C29CA8 = sub_1402828F0(64, 0x7D0uLL, 0x54446D4Du);
      v7 = (char *)qword_140C29CA8;
      if ( !qword_140C29CA8 )
      {
LABEL_6:
        sub_1402D8E00((__int64)CurrentThread);
        return;
      }
    }
    v8 = 0LL;
    dword_140C29CA0 = 0;
LABEL_4:
    v9 = (UNICODE_STRING *)&v7[40 * v8];
    RtlFreeUnicodeString(v9);
    v10 = (wchar_t *)sub_1402828F0(64, *(unsigned __int16 *)a1, 0x54446D4Du);
    v9->Buffer = v10;
    if ( v10 )
    {
      memmove(v10, a1[1], *(unsigned __int16 *)a1);
      v9->Length = *(_WORD *)a1;
      v9->MaximumLength = *((_WORD *)a1 + 1);
      *(_QWORD *)&v9[1].Length = a2;
      v9[1].Buffer = (wchar_t *)(a2 + v3);
      *(_QWORD *)&v9[2].Length = MEMORY[0xFFFFF78000000014];
      ++dword_140C29CA0;
    }
    else
    {
      *(_DWORD *)&v9->Length = 0;
    }
    goto LABEL_6;
  }
}

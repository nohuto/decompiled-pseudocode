/*
 * XREFs of KiTpReadImageData @ 0x140976714
 * Callers:
 *     KiTpSetupCompletion @ 0x1409767F8 (KiTpSetupCompletion.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memmove @ 0x140435700 (memmove.c)
 */

__int64 __fastcall KiTpReadImageData(_KPROCESS *a1, char a2, const void *a3, void *a4, unsigned int Size)
{
  unsigned __int64 v9; // r8
  $115DCDF994C6370D29323EAB0E0C9502 v11; // [rsp+30h] [rbp-58h] BYREF

  memset(&v11, 0, sizeof(v11));
  if ( a1 )
    KiStackAttachProcess(a1, 0, (__int64)&v11);
  if ( a2 )
  {
    if ( Size )
    {
      v9 = (unsigned __int64)a3 + Size;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(a4, a3, Size);
  if ( a1 )
    KiUnstackDetachProcess(&v11);
  return 0LL;
}

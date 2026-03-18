/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x140389E00
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 */

void __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  MiWriteComplete(*a4, (int *)(*a4 + 16), 0);
}

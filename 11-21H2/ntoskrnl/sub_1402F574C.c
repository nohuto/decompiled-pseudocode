/*
 * XREFs of sub_1402F574C @ 0x1402F574C
 * Callers:
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402F574C(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL) % (unsigned int)dword_140C097B4;
  if ( byte_140C54C58 == 1 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 592) + 8 * v1 + 64);
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v1 + 80);
}

/*
 * XREFs of sub_140389E40 @ 0x140389E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

__int64 __fastcall sub_140389E40(_UNKNOWN ****a1)
{
  _UNKNOWN ***v2; // rdx
  __int64 v3; // rdi
  _UNKNOWN **v4; // rbx
  __int64 v5; // rsi

  ExAcquireSpinLockSharedAtDpcLevel(&dword_140CF6640);
  v2 = (_UNKNOWN ***)&off_140C04340;
  if ( *a1 )
    v2 = *a1;
  v3 = (unsigned __int64)*a1 & -(__int64)(*a1 != 0LL);
  v4 = *v2;
  v5 = 0LL;
  while ( v4 != &off_140C04340 )
  {
    if ( sub_140347810((struct _EX_RUNDOWN_REF *)v4 - 2) )
    {
      v5 = (__int64)*(v4 - 1);
      *a1 = (_UNKNOWN ***)v4;
      break;
    }
    v4 = (_UNKNOWN **)*v4;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140CF6640);
  if ( v3 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(v3 - 16));
  return v5;
}

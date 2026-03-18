/*
 * XREFs of CondRefOf @ 0x1C0019C00
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     IsCompatableDSDTRevision @ 0x1C0019BAC (IsCompatableDSDTRevision.c)
 */

__int64 __fastcall CondRefOf(struct _SLIST_ENTRY *a1, __int64 a2)
{
  unsigned int v4; // r8d
  bool v5; // al
  __int64 v6; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v4 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v8);
  if ( !v4 )
  {
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL) - 128) > 1u )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    }
    else
    {
      v5 = IsCompatableDSDTRevision();
      v6 = v8;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)v5 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      return (unsigned int)WriteObject(a1, v6, *(_QWORD *)(a2 + 80));
    }
  }
  return v4;
}

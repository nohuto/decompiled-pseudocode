/*
 * XREFs of ?FindById@KnobNamespace@@CAPEAV1@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x1C013F8C8
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C013F9A8 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     <none>
 */

struct KnobNamespace *__fastcall KnobNamespace::FindById(const struct _CONFIG_KNOB_NAMESPACE *a1)
{
  __int64 *v1; // rdx
  _CONFIG_KNOB_NAMESPACE_TYPE NamespaceType; // r10d
  __int64 v4; // rcx

  v1 = (__int64 *)qword_1C00F5DD0;
  if ( (__int64 *)qword_1C00F5DD0 == &qword_1C00F5DD0 )
    return 0LL;
  NamespaceType = a1->NamespaceType;
  while ( 1 )
  {
    if ( *((_DWORD *)v1 - 6) == NamespaceType )
    {
      v4 = *(__int64 *)((char *)v1 - 20) - *(_QWORD *)&a1->ObjectId.Data1;
      if ( !v4 )
        v4 = *(__int64 *)((char *)v1 - 12) - *(_QWORD *)a1->ObjectId.Data4;
      if ( !v4 )
        break;
    }
    v1 = (__int64 *)*v1;
    if ( v1 == &qword_1C00F5DD0 )
      return 0LL;
  }
  return (struct KnobNamespace *)(v1 - 4);
}

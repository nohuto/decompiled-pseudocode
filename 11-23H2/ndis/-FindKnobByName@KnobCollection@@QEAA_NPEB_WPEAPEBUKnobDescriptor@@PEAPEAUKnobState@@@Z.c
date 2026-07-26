/*
 * XREFs of ?FindKnobByName@KnobCollection@@QEAA_NPEB_WPEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x1C01401DC
 * Callers:
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x1C013F918 (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 * Callees:
 *     <none>
 */

bool __fastcall KnobCollection::FindKnobByName(
        KnobCollection *this,
        const wchar_t *a2,
        const struct KnobDescriptor **a3,
        struct KnobState **a4)
{
  __int64 v4; // rbx
  __int64 i; // rsi
  bool result; // al

  *a3 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  if ( !*((_QWORD *)this + 7) )
    return 0;
  for ( i = 0LL; _wcsicmp(a2, *(const wchar_t **)(*((_QWORD *)this + 8) + i)); i += 48LL )
  {
    if ( (unsigned __int64)++v4 >= *((_QWORD *)this + 7) )
      return 0;
  }
  result = 1;
  *a3 = (const struct KnobDescriptor *)(*((_QWORD *)this + 8) + 48 * v4);
  *a4 = (KnobCollection *)((char *)this + 24 * v4 + 72);
  return result;
}

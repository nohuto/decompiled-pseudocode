/*
 * XREFs of wil::details::functor_wrapper_void__lambda_dd4cb658ca711c62d7abbe8ea5f22b71__&_::Run @ 0x18005C700
 * Callers:
 *     <none>
 * Callees:
 *     ??0CSpatialAudioDtsxHdmi@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CFBC (--0CSpatialAudioDtsxHdmi@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::functor_wrapper_void__lambda_dd4cb658ca711c62d7abbe8ea5f22b71____::Run(__int64 a1)
{
  unsigned __int8 **v1; // rbx
  CSpatialAudioDtsxHdmi *v2; // rax
  CSpatialAudioDtsxHdmi *v3; // rdx
  __int64 v4; // rax

  v1 = *(unsigned __int8 ***)(a1 + 8);
  v2 = (CSpatialAudioDtsxHdmi *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
    v3 = CSpatialAudioDtsxHdmi::CSpatialAudioDtsxHdmi(v2, *(HINSTANCE *)v1[1]);
  else
    v3 = 0LL;
  *(_QWORD *)&(*v1)[8 * **v1 + 8] = v3;
  v4 = **v1;
  if ( *(_QWORD *)&(*v1)[8 * v4 + 8] )
    **v1 = v4 + 1;
  return 0LL;
}

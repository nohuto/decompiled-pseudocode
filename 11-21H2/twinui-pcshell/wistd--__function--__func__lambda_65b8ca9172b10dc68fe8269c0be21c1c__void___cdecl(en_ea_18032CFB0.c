/*
 * XREFs of wistd::__function::__func__lambda_65b8ca9172b10dc68fe8269c0be21c1c__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18032CFB0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_929f6f6853200033fcbdc69f2b2582a9___ @ 0x180327118 (Windows--Internal--ComTaskPool--QueueTask__lambda_929f6f6853200033fcbdc69f2b2582a9___.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_65b8ca9172b10dc68fe8269c0be21c1c__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  return Windows::Internal::ComTaskPool::QueueTask__lambda_929f6f6853200033fcbdc69f2b2582a9___(
           a1,
           a2,
           *(_DWORD *)(v3 + 1340),
           &v3);
}

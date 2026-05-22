/*
 * XREFs of ??1?$NtList@UAmbientListEntry@LampArrayRawInputProvider@@@@QEAA@XZ @ 0x180059A0C
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E8D6C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UILampArrayStaticsPrivate@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180059A74 (--1-$com_ptr_t@UILampArrayStaticsPrivate@Internal@Lights@Devices@Windows@@Uerr_returncode_policy.c)
 */

__int64 __fastcall NtList<LampArrayRawInputProvider::AmbientListEntry>::~NtList<LampArrayRawInputProvider::AmbientListEntry>(
        __int64 *a1)
{
  __int64 *v1; // rdi
  bool i; // zf
  __int64 result; // rax

  v1 = (__int64 *)*a1;
  for ( i = *(_QWORD *)(*a1 + 8) == (_QWORD)a1; ; i = *(_QWORD *)(*a1 + 8) == (_QWORD)a1 )
  {
    result = *v1;
    if ( !i || *(__int64 **)(result + 8) != v1 )
      __fastfail(3u);
    *a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v1 == a1 )
      break;
    wil::com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>(v1 + 2);
    operator delete(v1);
    --a1[2];
    v1 = (__int64 *)*a1;
  }
  return result;
}

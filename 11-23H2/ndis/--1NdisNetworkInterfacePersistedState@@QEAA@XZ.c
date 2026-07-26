/*
 * XREFs of ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C002A534
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0118BA0 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C013E4F8 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     <none>
 */

void __fastcall NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState(
        NdisNetworkInterfacePersistedState *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x7274534Bu);
  v3 = *(void **)this;
  *(_QWORD *)this = 0LL;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
}

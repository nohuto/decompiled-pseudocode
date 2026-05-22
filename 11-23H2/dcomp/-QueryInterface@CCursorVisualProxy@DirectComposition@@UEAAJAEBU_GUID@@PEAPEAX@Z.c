/*
 * XREFs of ?QueryInterface@CCursorVisualProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECC10
 * Callers:
 *     <none>
 * Callees:
 *     ?CResorceProxy_QueryInterface@DirectComposition@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180011EBC (-CResorceProxy_QueryInterface@DirectComposition@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualProxy::QueryInterface(
        DirectComposition::CCursorVisualProxy *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax

  result = DirectComposition::CResorceProxy_QueryInterface(this, a2, a3, a4);
  if ( (_DWORD)result == -2147467262 )
  {
    result = (__int64)a2->lpVtbl - *(_QWORD *)&GUID_194b7729_80d9_4821_84cc_9b52cb0860b3.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_194b7729_80d9_4821_84cc_9b52cb0860b3.Data1 )
      result = (__int64)a2[1].lpVtbl - *(_QWORD *)GUID_194b7729_80d9_4821_84cc_9b52cb0860b3.Data4;
    if ( !result )
    {
      *(_QWORD *)&a3->Data1 = this;
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      return result;
    }
  }
  else if ( (int)result >= 0 )
  {
    return result;
  }
  *(_QWORD *)&a3->Data1 = 0LL;
  return 2147500034LL;
}

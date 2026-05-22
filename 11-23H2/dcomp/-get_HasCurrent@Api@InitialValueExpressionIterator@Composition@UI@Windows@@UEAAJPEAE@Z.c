/*
 * XREFs of ?get_HasCurrent@Api@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1801A2EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionIterator::Api::get_HasCurrent(
        Windows::UI::Composition::InitialValueExpressionIterator::Api *this,
        bool *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v3 = 0;
  *a2 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 10) == *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) )
    {
      *a2 = *((_QWORD *)this + 4) != **((_QWORD **)this + 3);
    }
    else
    {
      v3 = -2147483636;
      DoStackCaptureDirect(-2147483636, 0xB4u);
    }
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}

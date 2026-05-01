/*
 * XREFs of ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x180534C18
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180536154 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180534170 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_CommitPlacement@CDragVisual@@AEAAXXZ @ 0x1805341B8 (-_CommitPlacement@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_OnKeyDown(__int64 **this, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( !*((_BYTE *)this + 324) && !*((_BYTE *)this + 325) && !*((_DWORD *)this + 82) )
  {
    v3 = a2 - 13;
    if ( !v3 )
      goto LABEL_17;
    v4 = v3 - 14;
    if ( !v4 )
    {
      CDragVisual::_CancelPlacement((CDragVisual *)this);
      return;
    }
    v5 = v4 - 5;
    if ( v5 )
    {
      v6 = v5 - 5;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 != 1 )
              return;
            v9 = this[17];
            v10 = *v9;
            v11 = 3LL;
          }
          else
          {
            v9 = this[17];
            v10 = *v9;
            v11 = 2LL;
          }
        }
        else
        {
          v9 = this[17];
          v10 = *v9;
          v11 = 1LL;
        }
      }
      else
      {
        v9 = this[17];
        v10 = *v9;
        v11 = 0LL;
      }
      (*(void (__fastcall **)(__int64 *, __int64))(v10 + 24))(v9, v11);
      CDragVisual::_ClearVisualFeedback((CDragVisual *)this);
      *((_BYTE *)this + 326) = 1;
    }
    else
    {
LABEL_17:
      CDragVisual::_CommitPlacement((CDragVisual *)this);
    }
  }
}

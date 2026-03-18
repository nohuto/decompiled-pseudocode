/*
 * XREFs of ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C007E9B8
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 * Callees:
 *     _lambda_a4faeffec317e94db02d9bdb76d95fff_::operator() @ 0x1C007EA40 (_lambda_a4faeffec317e94db02d9bdb76d95fff_--operator().c)
 *     _anonymous_namespace_::NotifyPartExit @ 0x1C007FC08 (_anonymous_namespace_--NotifyPartExit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1C0236504 (_anonymous_namespace_--NotifyPartEnter.c)
 */

void __fastcall NotifyShell::HitTestPartUpdate(
        NotifyShell *this,
        const struct tagDESKTOP *a2,
        struct tagWND *a3,
        __int64 a4)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  const struct tagDESKTOP *v8; // rbx
  char v9; // bp
  int v10; // eax
  const struct tagDESKTOP *v11; // rcx

  v5 = (unsigned int)a3;
  v6 = *((_QWORD *)this + 23);
  v8 = (const struct tagDESKTOP *)v6;
  v9 = 1;
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 320) & 1) != 0 )
    {
      LOBYTE(a4) = 1;
      if ( !(unsigned __int8)lambda_a4faeffec317e94db02d9bdb76d95fff_::operator()(
                               this,
                               v6,
                               *((unsigned int *)this + 48),
                               a4) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
        v8 = (const struct tagDESKTOP *)*((_QWORD *)this + 23);
      }
    }
  }
  if ( !(unsigned __int8)lambda_a4faeffec317e94db02d9bdb76d95fff_::operator()(this, a2, v5, 0LL) )
  {
    if ( v8 )
      anonymous_namespace_::NotifyPartExit(v8);
    return;
  }
  v10 = *((_DWORD *)this + 48);
  if ( v8 != a2 )
    goto LABEL_15;
  if ( v10 == v5 )
    v9 = 0;
  if ( v8 == a2 )
  {
    if ( v10 == v5 )
      goto LABEL_18;
    v11 = a2;
  }
  else
  {
LABEL_15:
    if ( !v8 )
      goto LABEL_18;
    v11 = v8;
  }
  anonymous_namespace_::NotifyPartExit(v11);
LABEL_18:
  if ( v9 )
    anonymous_namespace_::NotifyPartEnter(a2, v5);
}

/*
 * XREFs of ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x1800EFDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAudioDGTerminated@AudioSessionManagerProvider@@YAX_N@Z @ 0x1800EA154 (-NotifyAudioDGTerminated@AudioSessionManagerProvider@@YAX_N@Z.c)
 */

void __fastcall CAudioSrv::OnDGProcessTerminated(CAudioSrv *this, char a2)
{
  LOBYTE(this) = a2;
  AudioSessionManagerProvider::NotifyAudioDGTerminated(this);
  (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 32LL))(g_pVolumeProvider);
}

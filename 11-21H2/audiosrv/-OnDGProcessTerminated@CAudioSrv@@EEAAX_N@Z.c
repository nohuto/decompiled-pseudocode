/*
 * XREFs of ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x1800C3ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAudioDGTerminated@AudioSessionManagerProvider@@YAX_N@Z @ 0x1800E28DC (-NotifyAudioDGTerminated@AudioSessionManagerProvider@@YAX_N@Z.c)
 */

void __fastcall CAudioSrv::OnDGProcessTerminated(CAudioSrv *this, bool a2)
{
  LOBYTE(this) = a2;
  AudioSessionManagerProvider::NotifyAudioDGTerminated(this, a2);
  (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 32LL))(g_pVolumeProvider);
}

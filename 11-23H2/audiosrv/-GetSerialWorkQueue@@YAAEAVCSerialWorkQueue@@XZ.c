/*
 * XREFs of ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x1800EFD00
 * Callers:
 *     _lambda_887eec80cbd262f34f149ad6d6f79b4e_::operator() @ 0x180071250 (_lambda_887eec80cbd262f34f149ad6d6f79b4e_--operator().c)
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *GetSerialWorkQueue(void)
{
  return (struct CSerialWorkQueue *)(*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
}

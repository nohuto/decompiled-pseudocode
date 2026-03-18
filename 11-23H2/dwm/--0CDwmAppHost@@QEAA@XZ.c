/*
 * XREFs of ??0CDwmAppHost@@QEAA@XZ @ 0x140003BB4
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x1400011E0 (_dynamic_initializer_for__g_dwmAppHost__.c)
 * Callees:
 *     <none>
 */

CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  NTSTATUS InformationProcess; // eax
  int v3; // ecx
  bool v4; // sf
  CDwmAppHost *result; // rax
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h]

  dword_140017B78 = 1;
  qword_140017B90 = 0LL;
  *(_OWORD *)&hInstance = 0LL;
  g_dwmAppHost = (__int64)&CDwmAppHost::`vftable';
  qword_140017BA8[0] = (__int64)&CSettingsManager::`vftable';
  dword_140017B98 = 0;
  hwnd = 0LL;
  byte_140017BC8 = 1;
  qword_140017BD8 = 0LL;
  dword_140017BE0 = 0;
  *(_QWORD *)&uExitCode = 0LL;
  byte_140017BF8 = 0;
  qword_140017C00 = 0LL;
  byte_140017C08 = 0;
  dword_140017C0C = 3000;
  qword_140017C10 = 0LL;
  word_140017C18 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v7 = 0LL;
  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(
                         CurrentProcess,
                         ProcessBasicInformation,
                         ProcessInformation,
                         0x30u,
                         0LL);
  v3 = qword_140017B90;
  v4 = InformationProcess < 0;
  result = (CDwmAppHost *)&g_dwmAppHost;
  if ( !v4 )
    v3 = DWORD2(v7);
  LODWORD(qword_140017B90) = v3;
  return result;
}

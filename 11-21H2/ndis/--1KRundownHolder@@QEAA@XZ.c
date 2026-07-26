/*
 * XREFs of ??1KRundownHolder@@QEAA@XZ @ 0x1C013197C
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0131DE0 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall KRundownHolder::~KRundownHolder(KRundownHolder *this)
{
  ULONG m_count; // edx

  m_count = this->m_count;
  if ( m_count )
  {
    this->m_count = 0;
    ExReleaseRundownProtectionEx(&this->m_rundown->m_rundown, m_count);
  }
}

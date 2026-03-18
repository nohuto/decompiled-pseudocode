/*
 * XREFs of ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00CA914
 * Callers:
 *     xxxSetWindowLong @ 0x1C00C9D14 (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00CA358 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C022CF04 (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttachDetach::~CProcessAttachDetach(CProcessAttachDetach *this)
{
  if ( *(_BYTE *)this )
    KeDetachProcess();
}

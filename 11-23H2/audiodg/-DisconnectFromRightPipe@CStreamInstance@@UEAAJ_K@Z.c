/*
 * XREFs of ?DisconnectFromRightPipe@CStreamInstance@@UEAAJ_K@Z @ 0x140077900
 * Callers:
 *     <none>
 * Callees:
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x1400071AC (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStreamInstance::DisconnectFromRightPipe(CStreamInstance *this, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 248) )
    return 0LL;
  v2 = CPipeInstance::UnresolvePendingConnections(*((CPipeInstance **)this + 10), a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}

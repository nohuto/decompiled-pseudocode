/*
 * XREFs of VirtualizeFullKeyboardStates @ 0x1C01E9410
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     PpiFromProcessId @ 0x1C012D4D0 (PpiFromProcessId.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01F2D70 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F38C4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

char __fastcall VirtualizeFullKeyboardStates(int a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  const struct CONTAINER_ID *v9; // rdx
  unsigned int v10; // eax
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = isRootPartition();
  if ( (_BYTE)v2 )
  {
    v7 = SGDGetUserSessionState(v4, v3, v5, v6);
    LOBYTE(v2) = CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v7 + 12672) + 1296LL));
    if ( (_BYTE)v2 )
    {
      v8 = PpiFromProcessId(a1);
      if ( v8 )
        v10 = *(_DWORD *)(v8 + 1096);
      else
        v10 = 0;
      v12 = v10;
      if ( (_WORD)v10 || (v2 = HIWORD(v10), (_WORD)v2) )
        LOBYTE(v2) = IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates(
                       (IVRootDeliver::Keyboard::Detail *)&v12,
                       v9);
    }
  }
  return v2;
}

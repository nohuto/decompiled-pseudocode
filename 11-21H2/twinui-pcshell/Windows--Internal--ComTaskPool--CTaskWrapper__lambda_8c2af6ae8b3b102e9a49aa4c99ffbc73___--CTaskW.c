/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73_____lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___ @ 0x1803B2444
 * Callers:
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1803B3220 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73_____lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)(a1 + 32) = a2[2];
  v4 = *a2;
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_BYTE *)(a1 + 40) = 0;
  *((_BYTE *)a2 + 24) = 1;
  *(_QWORD *)a1 = off_18064F330;
  return a1;
}

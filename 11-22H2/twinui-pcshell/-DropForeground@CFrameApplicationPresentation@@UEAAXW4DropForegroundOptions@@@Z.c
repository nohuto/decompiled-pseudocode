/*
 * XREFs of ?DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z @ 0x18005D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___ @ 0x18005D850 (Windows--Internal--ComTaskPool--QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CFrameApplicationPresentation::DropForeground(unsigned int *a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  int v7[4]; // [rsp+20h] [rbp-38h]
  __int64 v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int *v11; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)v7 = a1;
  v7[2] = a2;
  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      (int)a1);
  }
  else
  {
    v11 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v8[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
    v3 = a1[12];
    v8[1] = (__int64)a1;
    v9 = *(_OWORD *)v7;
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___(v5, v4, v3, v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
    if ( v6 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  }
}

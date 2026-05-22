/*
 * XREFs of ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x1800DEFC4
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800DF220 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x1800DF580 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 *     ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800E1D44 (-SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV-$unordered_set@KU-$hash@K@std@@.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 */

__int64 *__fastcall Win32kInterop::CreateInputInteropMessageFromInputInfo(__int64 *a1, __int64 a2)
{
  size_t v4; // rbx
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _OWORD *v10; // rdx
  _OWORD *v11; // rax

  v4 = 240 * *(_DWORD *)(a2 + 316) + 168;
  v5 = operator new[](v4);
  *a1 = (__int64)v5;
  memset_0(v5, 0, v4);
  v6 = *a1;
  v7 = 0LL;
  *(_DWORD *)v6 = 0;
  v8 = v6 + 8;
  *(_DWORD *)(v6 + 156) = *(_DWORD *)(a2 + 316);
  *(_OWORD *)(v6 + 8) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(v6 + 24) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(v6 + 40) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(v6 + 56) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(v6 + 72) = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(v6 + 88) = *(_OWORD *)(a2 + 168);
  *(_OWORD *)(v6 + 104) = *(_OWORD *)(a2 + 184);
  *(_OWORD *)(v6 + 120) = *(_OWORD *)(a2 + 200);
  for ( *(_OWORD *)(v6 + 136) = *(_OWORD *)(a2 + 216); (unsigned int)v7 < *(_DWORD *)(a2 + 316); v10[8] = v11[8] )
  {
    v9 = 144 * v7;
    v10 = (_OWORD *)(240LL * (unsigned int)v7 + v8 + 160);
    v7 = (unsigned int)(v7 + 1);
    v11 = (_OWORD *)(v9 + a2 + 320);
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    v10[3] = v11[3];
    v10[4] = v11[4];
    v10[5] = v11[5];
    v10[6] = v11[6];
    v10[7] = v11[7];
  }
  return a1;
}

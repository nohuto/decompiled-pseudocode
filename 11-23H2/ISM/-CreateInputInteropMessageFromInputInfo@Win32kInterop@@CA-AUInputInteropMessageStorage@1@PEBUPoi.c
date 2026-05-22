/*
 * XREFs of ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x1800F8C64
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800F8EA0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x1800F9200 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z @ 0x1800F7A84 (--0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z.c)
 */

Win32kInterop::InputInteropMessageStorage *__fastcall Win32kInterop::CreateInputInteropMessageFromInputInfo(
        Win32kInterop::InputInteropMessageStorage *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  _OWORD *v8; // rdx
  _OWORD *v9; // rax

  v4 = 0LL;
  Win32kInterop::InputInteropMessageStorage::InputInteropMessageStorage(a1, 240 * *(_DWORD *)(a2 + 316) + 168);
  v5 = *(_QWORD *)a1;
  *(_DWORD *)v5 = 0;
  v6 = v5 + 8;
  *(_DWORD *)(v5 + 156) = *(_DWORD *)(a2 + 316);
  *(_OWORD *)(v5 + 8) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(v5 + 24) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(v5 + 40) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(v5 + 56) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(v5 + 72) = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(v5 + 88) = *(_OWORD *)(a2 + 168);
  *(_OWORD *)(v5 + 104) = *(_OWORD *)(a2 + 184);
  *(_OWORD *)(v5 + 120) = *(_OWORD *)(a2 + 200);
  *(_OWORD *)(v5 + 136) = *(_OWORD *)(a2 + 216);
  if ( *(_DWORD *)(a2 + 316) )
  {
    do
    {
      v7 = 144 * v4;
      v8 = (_OWORD *)(240LL * (unsigned int)v4 + v6 + 160);
      v4 = (unsigned int)(v4 + 1);
      v9 = (_OWORD *)(v7 + a2 + 320);
      *v8 = *v9;
      v8[1] = v9[1];
      v8[2] = v9[2];
      v8[3] = v9[3];
      v8[4] = v9[4];
      v8[5] = v9[5];
      v8[6] = v9[6];
      v8[7] = v9[7];
      v8[8] = v9[8];
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a2 + 316) );
  }
  return a1;
}

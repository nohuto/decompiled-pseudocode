/*
 * XREFs of ?ndisExpandStackAllocationLikely@@YAJP6AXPEAX@Z0@Z @ 0x1C003FEA2
 * Callers:
 *     ??$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KK@Z@Z @ 0x1C0023700 (--$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KK.c)
 *     ??$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C003D6AC (--$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ??$ndisExpandDataPathStack@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KKK@Z@Z @ 0x1C003D7DC (--$ndisExpandDataPathStack@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAJPEAU_NET_BUFFER_LIST@@KK.c)
 *     ??$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C0064668 (--$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisExpandStackAllocationLikely(void (*a1)(void *), void *a2)
{
  int v2; // r8d

  v2 = 24576;
  if ( (unsigned int)Size > 0x6000 )
    v2 = Size;
  return KeExpandKernelStackAndCalloutEx(a1, a2, v2, 0, 0LL);
}

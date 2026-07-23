/*
 * XREFs of CcPerfLogFlushCache @ 0x1403945CC
 * Callers:
 *     CcFlushCachePreProcess @ 0x14029E110 (CcFlushCachePreProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402A1760 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogFlushCache(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5, char a6, char a7)
{
  unsigned __int64 v11; // rax
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-24h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  _QWORD *v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+64h] [rbp-Ch]

  if ( a2 )
  {
    v17 = 0LL;
    v11 = CcReferenceSharedCacheMapFileObject(a2);
    v13[1] = *(_QWORD *)(v11 + 24);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(a2 + 96), v11, 0x63536343u);
    if ( a3 )
      v14 = *a3;
    else
      v14 = 0LL;
    v16 = *(_DWORD *)(a2 + 152);
    v13[0] = a1;
    v15 = a4;
    v12 = a5 != 0;
    LODWORD(v17) = v12;
    if ( a6 )
    {
      v12 |= 2u;
      LODWORD(v17) = v12;
    }
    if ( a7 )
      LODWORD(v17) = v12 | 4;
    v20 = 0;
    v18 = v13;
    v19 = 40;
    EtwTraceKernelEvent((int)&v18, 1, 0x80020000, 5641, 4200706);
  }
}

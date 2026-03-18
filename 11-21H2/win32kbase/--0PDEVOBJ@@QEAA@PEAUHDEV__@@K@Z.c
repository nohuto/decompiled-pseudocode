/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C016A304
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     PALLOCNOZ @ 0x1C0027CFC (PALLOCNOZ.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C002E950 (GreReleaseSemaphoreInternal.c)
 *     GreDeleteSemaphore @ 0x1C0044F30 (GreDeleteSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C0045014 (GreCreateSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     PALLOCMEM @ 0x1C0086980 (PALLOCMEM.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C008B640 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C0090D20 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00C11F0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C016A2C8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C016AAA0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2)
{
  struct PDEV *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  HDEV v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  HDEV v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ebp
  __int64 v17; // r8
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  HDEV v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // ebp
  void *v27; // rcx
  __int64 SemaphoreInternal; // rax
  __int64 v29; // rdx
  signed __int32 v30; // ett
  signed __int32 v31; // ett
  _QWORD *v32; // rax
  int v33; // r8d
  _QWORD *v34; // rax
  char **v35; // rcx
  _BYTE v37[112]; // [rsp+20h] [rbp-88h] BYREF
  char *v38; // [rsp+B0h] [rbp+8h] BYREF

  v38 = a2;
  *(_QWORD *)this = 0LL;
  if ( a2 && (*((_DWORD *)a2 + 10) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v37, (struct PDEVOBJ *)&v38);
    v4 = PDEV::Allocate(0);
    *(_QWORD *)this = v4;
    if ( !v4 )
    {
LABEL_36:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v37);
      return this;
    }
    v5 = 2LL;
    *((_QWORD *)v4 + 220) = *((_QWORD *)a2 + 220);
    v6 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 1752LL) = 1348756854;
    v7 = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 1696LL) = *((_QWORD *)a2 + 212);
    *(_QWORD *)(*(_QWORD *)this + 1704LL) = *((_QWORD *)a2 + 213);
    *(_QWORD *)(*(_QWORD *)this + 1712LL) = *((_QWORD *)a2 + 214);
    *(_QWORD *)(*(_QWORD *)this + 1720LL) = *((_QWORD *)a2 + 215);
    *(_QWORD *)(*(_QWORD *)this + 1728LL) = *((_QWORD *)a2 + 216);
    *(_QWORD *)(*(_QWORD *)this + 1736LL) = *((_QWORD *)a2 + 217);
    *(_QWORD *)(*(_QWORD *)this + 1744LL) = *((_QWORD *)a2 + 218);
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *((_QWORD *)a2 + 221);
    *(_QWORD *)(*(_QWORD *)this + 1776LL) = *((_QWORD *)a2 + 222);
    *(_QWORD *)(*(_QWORD *)this + 1784LL) = *((_QWORD *)a2 + 223);
    v8 = (HDEV)(a2 + 1792);
    v9 = (_OWORD *)(*(_QWORD *)this + 1792LL);
    do
    {
      *v9 = *(_OWORD *)v8;
      v9[1] = *((_OWORD *)v8 + 1);
      v9[2] = *((_OWORD *)v8 + 2);
      v9[3] = *((_OWORD *)v8 + 3);
      v9[4] = *((_OWORD *)v8 + 4);
      v9[5] = *((_OWORD *)v8 + 5);
      v9[6] = *((_OWORD *)v8 + 6);
      v9 += 8;
      v10 = *((_OWORD *)v8 + 7);
      v8 += 32;
      *(v9 - 1) = v10;
      --v6;
    }
    while ( v6 );
    *v9 = *(_OWORD *)v8;
    v9[1] = *((_OWORD *)v8 + 1);
    v9[2] = *((_OWORD *)v8 + 2);
    *((_QWORD *)v9 + 6) = *((_QWORD *)v8 + 6);
    v11 = (HDEV)(a2 + 2104);
    v12 = (_OWORD *)(*(_QWORD *)this + 2104LL);
    do
    {
      *v12 = *(_OWORD *)v11;
      v12[1] = *((_OWORD *)v11 + 1);
      v12[2] = *((_OWORD *)v11 + 2);
      v12[3] = *((_OWORD *)v11 + 3);
      v12[4] = *((_OWORD *)v11 + 4);
      v12[5] = *((_OWORD *)v11 + 5);
      v12[6] = *((_OWORD *)v11 + 6);
      v12 += 8;
      v13 = *((_OWORD *)v11 + 7);
      v11 += 32;
      *(v12 - 1) = v13;
      --v5;
    }
    while ( v5 );
    *v12 = *(_OWORD *)v11;
    v12[1] = *((_OWORD *)v11 + 1);
    v12[2] = *((_OWORD *)v11 + 2);
    v12[3] = *((_OWORD *)v11 + 3);
    v14 = *(_QWORD *)this;
    *(_OWORD *)(v14 + 2424) = *(_OWORD *)(a2 + 2424);
    *(_OWORD *)(v14 + 2440) = *(_OWORD *)(a2 + 2440);
    *(_OWORD *)(v14 + 2456) = *(_OWORD *)(a2 + 2456);
    *(_OWORD *)(v14 + 2472) = *(_OWORD *)(a2 + 2472);
    *(_OWORD *)(v14 + 2488) = *(_OWORD *)(a2 + 2488);
    *(_OWORD *)(v14 + 2504) = *(_OWORD *)(a2 + 2504);
    *(_QWORD *)(*(_QWORD *)this + 2536LL) = *((_QWORD *)a2 + 317);
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = *((_QWORD *)a2 + 318);
    *(_QWORD *)(*(_QWORD *)this + 2552LL) = *((_QWORD *)a2 + 319);
    *(_QWORD *)(*(_QWORD *)this + 2560LL) = *((_QWORD *)a2 + 320);
    *(_QWORD *)(*(_QWORD *)this + 2624LL) = *((_QWORD *)a2 + 328);
    *(_QWORD *)(*(_QWORD *)this + 2632LL) = *((_QWORD *)a2 + 329);
    *(_QWORD *)(*(_QWORD *)this + 2648LL) = *((_QWORD *)a2 + 331);
    *(_QWORD *)(*(_QWORD *)this + 2656LL) = *((_QWORD *)a2 + 332);
    *(_QWORD *)(*(_QWORD *)this + 2640LL) = *((_QWORD *)a2 + 330);
    *(_DWORD *)(*(_QWORD *)this + 3528LL) = *((_DWORD *)a2 + 882);
    *(_QWORD *)(*(_QWORD *)this + 3536LL) = 0LL;
    v15 = *((_QWORD *)a2 + 321);
    if ( v15 )
    {
      v16 = *(unsigned __int16 *)(v15 + 68) + *(unsigned __int16 *)(v15 + 70);
      *(_QWORD *)(*(_QWORD *)this + 2568LL) = PALLOCNOZ(v16, 0x76656447u);
      v18 = *(void **)(*(_QWORD *)this + 2568LL);
      if ( !v18 )
        goto LABEL_29;
      memmove(v18, *((const void **)a2 + 321), v16);
    }
    v19 = 1448LL;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = *((_DWORD *)a2 + 11);
    *(_QWORD *)(*(_QWORD *)this + 64LL) = *((_QWORD *)a2 + 8);
    *(_QWORD *)(*(_QWORD *)this + 1424LL) = *((_QWORD *)a2 + 178);
    *(_QWORD *)(*(_QWORD *)this + 1432LL) = *((_QWORD *)a2 + 179);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = *((_QWORD *)a2 + 180);
    *(_QWORD *)(*(_QWORD *)this + 2528LL) = *((_QWORD *)a2 + 316);
    do
    {
      *(_QWORD *)(v19 + *(_QWORD *)this) = *(_QWORD *)&a2[v19];
      v19 += 8LL;
    }
    while ( v19 < 1496 );
    v20 = 6LL;
    *(_QWORD *)(*(_QWORD *)this + 1496LL) = *((_QWORD *)a2 + 187);
    *(_QWORD *)(*(_QWORD *)this + 1688LL) = *((_QWORD *)a2 + 211);
    *(_QWORD *)(*(_QWORD *)this + 2576LL) = *((_QWORD *)a2 + 322);
    *(_DWORD *)(*(_QWORD *)this + 2584LL) = *((_DWORD *)a2 + 646);
    *(_DWORD *)(*(_QWORD *)this + 2588LL) = *((_DWORD *)a2 + 647);
    v21 = (HDEV)(a2 + 2664);
    v22 = (_OWORD *)(*(_QWORD *)this + 2664LL);
    do
    {
      *v22 = *(_OWORD *)v21;
      v22[1] = *((_OWORD *)v21 + 1);
      v22[2] = *((_OWORD *)v21 + 2);
      v22[3] = *((_OWORD *)v21 + 3);
      v22[4] = *((_OWORD *)v21 + 4);
      v22[5] = *((_OWORD *)v21 + 5);
      v22[6] = *((_OWORD *)v21 + 6);
      v22 += 8;
      v23 = *((_OWORD *)v21 + 7);
      v21 += 32;
      *(v22 - 1) = v23;
      --v20;
    }
    while ( v20 );
    *v22 = *(_OWORD *)v21;
    v22[1] = *((_OWORD *)v21 + 1);
    v22[2] = *((_OWORD *)v21 + 2);
    v22[3] = *((_OWORD *)v21 + 3);
    if ( *((_DWORD *)a2 + 290) )
    {
      *(_QWORD *)(*(_QWORD *)this + 2776LL) = *((_QWORD *)a2 + 160);
      *(_QWORD *)(*(_QWORD *)this + 2784LL) = *((_QWORD *)a2 + 161);
      *(_QWORD *)(*(_QWORD *)this + 2808LL) = *((_QWORD *)a2 + 163);
      *(_QWORD *)(*(_QWORD *)this + 2816LL) = *((_QWORD *)a2 + 164);
      *(_QWORD *)(*(_QWORD *)this + 2824LL) = *((_QWORD *)a2 + 165);
      *(_QWORD *)(*(_QWORD *)this + 2848LL) = *((_QWORD *)a2 + 166);
      *(_QWORD *)(*(_QWORD *)this + 2912LL) = *((_QWORD *)a2 + 167);
      *(_QWORD *)(*(_QWORD *)this + 3256LL) = *((_QWORD *)a2 + 168);
      *(_QWORD *)(*(_QWORD *)this + 3232LL) = *((_QWORD *)a2 + 169);
      *(_QWORD *)(*(_QWORD *)this + 3224LL) = *((_QWORD *)a2 + 170);
      *(_QWORD *)(*(_QWORD *)this + 3208LL) = *((_QWORD *)a2 + 171);
      *(_QWORD *)(*(_QWORD *)this + 3216LL) = *((_QWORD *)a2 + 173);
      *(_QWORD *)(*(_QWORD *)this + 2984LL) = *((_QWORD *)a2 + 172);
      *(_QWORD *)(*(_QWORD *)this + 3384LL) = *((_QWORD *)a2 + 174);
    }
    v24 = *((_QWORD *)a2 + 442);
    if ( v24 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *(_WORD *)(v24 + 2 * v25) );
      v26 = 2 * v25 + 2;
      *(_QWORD *)(*(_QWORD *)this + 3536LL) = PALLOCMEM(v26, 1886221639);
      v27 = *(void **)(*(_QWORD *)this + 3536LL);
      if ( v27 )
        memmove(v27, *((const void **)a2 + 442), v26);
    }
    PDEV::InitializeClientReferenceCount(*(PDEV **)this);
    *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = *((_DWORD *)a2 + 10) & 0x60001;
    SemaphoreInternal = GreCreateSemaphoreInternal(0);
    *(_QWORD *)(*(_QWORD *)this + 48LL) = SemaphoreInternal;
    if ( SemaphoreInternal )
    {
      v29 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v30 = *(_DWORD *)(v29 + 40);
      while ( v30 != _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 40), v30 & 0xFFFFFFBF, v30) );
      *(_QWORD *)(*(_QWORD *)this + 56LL) = GreCreateSemaphoreInternal(0);
      if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
      {
        _m_prefetchw((const void *)(v7 + 40));
        do
          v31 = *(_DWORD *)(v7 + 40);
        while ( v31 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 40), v31 | 0x80000, v31) );
        v32 = (_QWORD *)(*(_QWORD *)this + 2600LL);
        v32[1] = v32;
        *v32 = v32;
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        **(_QWORD **)this = gppdevList;
        gppdevList = *(struct PDEV **)this;
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v33);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        v34 = (_QWORD *)(*(_QWORD *)this + 3504LL);
        v34[1] = v34;
        *v34 = v34;
        goto LABEL_36;
      }
    }
LABEL_29:
    v35 = *(char ***)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 48LL) )
    {
      GreDeleteSemaphore(*(PERESOURCE *)(*(_QWORD *)this + 48LL));
      v35 = *(char ***)this;
    }
    if ( v35[442] )
    {
      Win32FreePool(v35[442]);
      *(_QWORD *)(*(_QWORD *)this + 3536LL) = 0LL;
      v35 = *(char ***)this;
    }
    if ( v35[321] )
    {
      Win32FreePool(v35[321]);
      v35 = *(char ***)this;
    }
    PDEV::Free((struct PDEV *)v35, 0LL, v17);
    *(_QWORD *)this = 0LL;
    goto LABEL_36;
  }
  return this;
}

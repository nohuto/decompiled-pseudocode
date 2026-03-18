/*
 * XREFs of ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BBB68
 * Callers:
 *     GreAnimatePalette @ 0x1C02B5E20 (GreAnimatePalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XEPALOBJ::ulAnimatePalette(
        struct PALETTE **this,
        unsigned int a2,
        int a3,
        const struct tagPALETTEENTRY *a4)
{
  __int64 v5; // rdi
  struct PALETTE *v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // r12
  __int64 v13; // r14
  unsigned __int8 *v14; // rdi
  struct PALETTE *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // r15
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int8 *v23; // rax
  __int64 v24; // rdx
  void (__fastcall *v25)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+80h] [rbp+30h] BYREF

  v5 = a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
  v8 = *this;
  if ( *this == ppalDefault )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_26;
  v9 = *((_DWORD *)v8 + 7);
  if ( (unsigned int)v5 >= v9 )
    goto LABEL_26;
  if ( (int)v5 + a3 > v9 )
    a3 = v9 - v5;
  if ( a3 )
  {
    v10 = *((_QWORD *)v8 + 14);
    v11 = 0;
    v12 = v5;
    v27 = 0LL;
    v13 = v10 + 4 * v5;
    v14 = 0LL;
    v28 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v15 = *this;
    if ( *((_DWORD *)*this + 14) )
    {
      v16 = *((_QWORD *)v15 + 6);
      if ( (*(_DWORD *)(v16 + 2140) & 0x100) != 0 )
      {
        v27 = *(_QWORD *)(v16 + 1776);
        v17 = *((_QWORD *)v15 + 10);
        if ( v17 )
          v14 = (unsigned __int8 *)(v17 + v12 + 4);
      }
    }
    v18 = (char *)a4 - v13;
    do
    {
      v19 = *(_DWORD *)&v18[v13];
      --a3;
      v20 = (*(_BYTE *)(v13 + 3) & 1) == 0;
      LODWORD(v30) = v19;
      if ( !v20 )
      {
        ++v11;
        *(_DWORD *)v13 = v19;
        if ( v14 )
        {
          v21 = *v14;
          v22 = *(_QWORD *)(v27 + 112);
          if ( (*(_BYTE *)(v22 + 4 * v21 + 3) & 1) != 0 )
          {
            BYTE3(v30) = *(_BYTE *)(v22 + 4 * v21 + 3);
            *(_DWORD *)(v22 + 4 * v21) = v30;
          }
        }
      }
      v23 = v14 + 1;
      if ( !v14 )
        v23 = 0LL;
      v13 += 4LL;
      v14 = v23;
    }
    while ( a3 );
    SEMOBJ::vUnlock((SEMOBJ *)&v28);
    if ( v14 )
    {
      v30 = *((_QWORD *)*this + 6);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)v29, (struct PDEVOBJ *)&v30);
      v28 = *(_QWORD *)(v30 + 56);
      GreAcquireSemaphore(v28);
      GreAcquireSemaphore(*(_QWORD *)(v30 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v30 + 48), 11LL);
      v24 = v30;
      if ( (*(_DWORD *)(v30 + 2140) & 0x100) != 0 && (*(_DWORD *)(v30 + 40) & 0x400) == 0 )
      {
        v25 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v30 + 1736);
        if ( v25 )
        {
          v25(*(_QWORD *)(*(_QWORD *)(v30 + 24) + 1768LL), &v27, 0LL, 0LL, *(_DWORD *)(v27 + 28));
          v24 = v30;
        }
        else
        {
          v11 = 0;
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(v24 + 48));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v30 + 48));
      SEMOBJ::vUnlock((SEMOBJ *)&v28);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v29);
    }
  }
  else
  {
LABEL_26:
    v11 = 0;
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
  return v11;
}

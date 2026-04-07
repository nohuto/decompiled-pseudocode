/*
 * XREFs of ?FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@@Z @ 0x1800AC54C
 * Callers:
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x1800DBCE0 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall CAnimationScheduler::FindAnimatingTarget(__int64 a1)
{
  CBaseObject *v1; // rbx
  __int64 i; // r8
  __int64 v4; // rdx
  unsigned int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( *(_DWORD *)(v4 + 24) != 4 && *(_DWORD *)(v4 + 72) == 72 )
    {
      v5 = *(_DWORD *)(v4 + 120);
      v6 = 0LL;
      if ( v5 )
      {
        v7 = *(_QWORD *)(v4 + 96);
        while ( 1 )
        {
          v8 = *(_QWORD *)(v7 + 8 * v6);
          if ( (*(_DWORD *)(v8 + 24) & 0xFFF) == 0x28 )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= v5 )
            goto LABEL_12;
        }
        if ( v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
          if ( v1 )
          {
            CBaseObject::Release((CBaseObject *)v8);
            CBaseObject::Release(v1);
            return 0LL;
          }
          v1 = (CBaseObject *)v8;
        }
      }
    }
LABEL_12:
    ;
  }
  return v1;
}

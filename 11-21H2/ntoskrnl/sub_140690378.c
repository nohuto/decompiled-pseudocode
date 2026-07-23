/*
 * XREFs of sub_140690378 @ 0x140690378
 * Callers:
 *     sub_140692780 @ 0x140692780 (sub_140692780.c)
 * Callees:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     PsGetJobSilo @ 0x140212000 (PsGetJobSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F6170 @ 0x1402F6170 (sub_1402F6170.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     sub_140690600 @ 0x140690600 (sub_140690600.c)
 *     sub_140690914 @ 0x140690914 (sub_140690914.c)
 *     PsMakeSiloContextPermanent @ 0x140690B00 (PsMakeSiloContextPermanent.c)
 *     sub_140690BDC @ 0x140690BDC (sub_140690BDC.c)
 *     PsInsertSiloContext @ 0x140692A50 (PsInsertSiloContext.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     sub_140693188 @ 0x140693188 (sub_140693188.c)
 *     sub_1406931E4 @ 0x1406931E4 (sub_1406931E4.c)
 *     sub_1406C29BC @ 0x1406C29BC (sub_1406C29BC.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     sub_140926B88 @ 0x140926B88 (sub_140926B88.c)
 *     PsRemoveSiloContext @ 0x1409AB7E0 (PsRemoveSiloContext.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140690378(HANDLE *a1, unsigned int a2, KPROCESSOR_MODE a3, __int64 a4, PVOID Object, __int64 a6)
{
  __int64 v8; // rsi
  void *v9; // r15
  int JobSilo; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rax
  PVOID PoolWithTag; // rax

  Object = 0LL;
  v8 = 0LL;
  a6 = 0LL;
  v9 = 0LL;
  if ( a2 >= 8 )
  {
    JobSilo = ObCreateObject(0, qword_140D00A18, 0, 1);
    if ( JobSilo >= 0 )
    {
      memset(0LL, 0, 0x60uLL);
      MEMORY[0x10] = 0LL;
      JobSilo = sub_140926B88(0LL);
      if ( JobSilo >= 0 )
      {
        JobSilo = sub_1406931E4(v12, v11, v13, v14, 0LL);
        if ( JobSilo >= 0 )
        {
          MEMORY[0x58] = 1;
          JobSilo = ObReferenceObjectByHandleWithTag(*a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
          if ( JobSilo >= 0 )
          {
            JobSilo = PsGetJobSilo((__int64)Object);
            if ( JobSilo >= 0 )
            {
              v15 = a6;
              if ( sub_1402F6170((__int64)KeGetCurrentThread(), a6) )
              {
                JobSilo = -1073741811;
              }
              else
              {
                MEMORY[0] = *(_OWORD *)(v15 + 1432);
                v16 = sub_140693188(0LL);
                v8 = v16;
                if ( v16
                  && (*(_OWORD *)v16 = *(_OWORD *)(v15 + 1432),
                      *(_WORD *)(v16 + 32) = 1,
                      PoolWithTag = ExAllocatePoolWithTag(PagedPool, stru_140D3CE98.Length, 0x67655256u),
                      (*(_QWORD *)(v8 + 24) = PoolWithTag) != 0LL) )
                {
                  *(_WORD *)(v8 + 16) = 0;
                  *(_WORD *)(v8 + 18) = stru_140D3CE98.Length;
                  sub_140208AD8((_WORD *)(v8 + 16), &stru_140D3CE98.Length);
                  JobSilo = sub_140690914(v15);
                  if ( JobSilo >= 0 )
                  {
                    JobSilo = PsInsertSiloContext(v15, (unsigned int)dword_140C48D10, 0LL);
                    if ( JobSilo >= 0 )
                    {
                      v9 = (void *)sub_140690BDC(v15);
                      JobSilo = CmSetCallbackObjectContext(v9, &Cookie, (PVOID)v8, 0LL);
                      if ( JobSilo < 0 )
                      {
                        PsRemoveSiloContext(v15, (unsigned int)dword_140C48D10, 0LL);
                      }
                      else
                      {
                        v8 = 0LL;
                        PsMakeSiloContextPermanent(v15, (unsigned int)dword_140C48D10);
                        JobSilo = 0;
                      }
                    }
                  }
                }
                else
                {
                  JobSilo = -1073741670;
                }
              }
            }
          }
        }
      }
    }
    if ( v9 )
      ObfDereferenceObject(v9);
    if ( v8 )
      sub_1406C29BC((PVOID)v8);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)JobSilo;
}

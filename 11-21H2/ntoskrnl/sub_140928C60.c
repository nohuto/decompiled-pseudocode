/*
 * XREFs of sub_140928C60 @ 0x140928C60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066CFE4 @ 0x14066CFE4 (sub_14066CFE4.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140927C7C @ 0x140927C7C (sub_140927C7C.c)
 *     sub_1409286EC @ 0x1409286EC (sub_1409286EC.c)
 */

__int64 __fastcall sub_140928C60(ULONG_PTR a1, void *a2)
{
  char v3; // r14
  __int64 result; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // rsi
  int v9; // edi
  ULONG_PTR Count; // rdi
  __int16 v11; // ax
  __int16 v12; // ax
  BOOLEAN v13; // al
  struct _KEVENT *v14; // rsi
  int v15; // eax
  PVOID Object; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v18[14]; // [rsp+50h] [rbp-49h] BYREF

  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v17 = 0LL;
  result = sub_140732D40(a1, 2048, (__int64)PsProcessType, v3, 0x4F676244u, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (struct _EX_RUNDOWN_REF *)Object;
    v8 = *((_QWORD *)CurrentThread + 23);
    if ( Object == (PVOID)v8 || Object == PsInitialSystemProcess )
    {
      v9 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = v3;
      if ( sub_14066CFE4(v5, *((_QWORD *)CurrentThread + 23), (__int64)Object) )
      {
        v9 = -1073740014;
      }
      else
      {
        Count = v7[124].Count;
        if ( (Count & 1) == 0
          || (memset(v18, 0, 0x68uLL), v18[1] = Count,
                                       v18[2] = 1LL,
                                       v9 = sub_140358A20(2u, 12, 0, (__int64)v18),
                                       v9 >= 0) )
        {
          if ( !*(_QWORD *)(v8 + 1408)
            || (v11 = *(_WORD *)(v8 + 2412), v11 != 332) && v11 != 452
            || v7[176].Count && ((v12 = WORD2(v7[301].Ptr), v12 == 332) || v12 == 452) )
          {
            Object = 0LL;
            v9 = ObReferenceObjectByHandle(a2, 2u, qword_140D05120, v3, &Object, 0LL);
            if ( v9 >= 0 )
            {
              v13 = sub_140347810(v7 + 139);
              v14 = (struct _KEVENT *)Object;
              if ( v13 )
              {
                v15 = sub_140927C7C((ULONG_PTR)v7, (struct _KEVENT *)Object, &v17);
                v9 = sub_1409286EC((ULONG_PTR)v7, v14, v15, v17);
                sub_1402AD030(v7 + 139);
              }
              else
              {
                v9 = -1073741558;
              }
              ObfDereferenceObject(v14);
            }
          }
          else
          {
            v9 = -1073741637;
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    return (unsigned int)v9;
  }
  return result;
}

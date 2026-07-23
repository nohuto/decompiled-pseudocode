/*
 * XREFs of sub_14066C1DC @ 0x14066C1DC
 * Callers:
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140668084 @ 0x140668084 (sub_140668084.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14066BC7C @ 0x14066BC7C (sub_14066BC7C.c)
 *     sub_14066C5B0 @ 0x14066C5B0 (sub_14066C5B0.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A59D8 @ 0x1407A59D8 (sub_1407A59D8.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 *     sub_140965B94 @ 0x140965B94 (sub_140965B94.c)
 */

__int64 __fastcall sub_14066C1DC(char *Object, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  int SectionInformation; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  PVOID v17; // [rsp+48h] [rbp-8h]
  PVOID v18; // [rsp+98h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h]
  __int64 v20; // [rsp+A8h] [rbp+58h] BYREF

  v19 = a3;
  v3 = *(void **)(a2 + 8);
  v20 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !v3 )
    return 3221225480LL;
  v18 = 0LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         *((_BYTE *)KeGetCurrentThread() + 562),
                         &v18,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(v18, 0LL, &v16);
    if ( SectionInformation >= 0 )
    {
      if ( (DWORD2(v16) & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v8 = (unsigned int)(dword_140D06A90 - 1);
        v9 = ~((unsigned int)dword_140D06A90 - 1LL);
        v10 = v9 & (v8 + *(unsigned int *)(a2 + 16));
        v11 = v9 & (v8 + *(_QWORD *)(a2 + 24));
        if ( v11 + v10 >= v10 )
        {
          if ( v11 + v10 <= (unsigned __int64)v17 )
          {
            SectionInformation = sub_14066BC7C(Object, 0, 0, v3, v17, (ULONG_PTR *)&v20);
            if ( SectionInformation >= 0 )
            {
              v12 = v20;
              SectionInformation = sub_14066C5B0(v20, Object, (__int64)&v15);
              if ( SectionInformation >= 0 )
              {
                v13 = v15;
                *(_DWORD *)a2 = 48;
                *(_QWORD *)(a2 + 32) = *(_QWORD *)(v13 + 40);
                v14 = *(_QWORD *)(v13 + 48);
                *(_QWORD *)(a2 + 40) = 0LL;
                *(_QWORD *)(a2 + 24) = v14;
                *(_QWORD *)(v19 + 40) = v13;
                sub_1407A6A34(*(_QWORD *)(v13 + 16));
                ++*(_DWORD *)(v13 + 76);
                sub_1407B0F40(*(_QWORD *)(v13 + 16));
              }
              else if ( (unsigned __int8)sub_1407A59D8(v12) )
              {
                sub_140965B94(v12);
              }
              sub_140965B94(v12);
            }
          }
          else
          {
            SectionInformation = -1073741670;
          }
        }
        else
        {
          SectionInformation = -1073741811;
        }
      }
    }
    ObfDereferenceObject(v18);
  }
  return (unsigned int)SectionInformation;
}

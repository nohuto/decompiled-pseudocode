/*
 * XREFs of ?RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18002ABC0
 * Callers:
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002AAEC (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180087744 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800878A0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpObjectTableRemoveObject(struct _RM_OBJECT_TABLE *a1, struct _RM_OBJECT_HEADER *a2)
{
  struct _RM_OBJECT_HEADER *i; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h]

  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  v5 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 1) & 0x1F));
  for ( i = (struct _RM_OBJECT_HEADER *)(*((_QWORD *)a1 + 1)
                                       + 8LL
                                       * ((37
                                         * (BYTE6(v5)
                                          + 37
                                          * (BYTE5(v5)
                                           + 37
                                           * (BYTE4(v5)
                                            + 37
                                            * (BYTE3(v5)
                                             + 37
                                             * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))
                                         + HIBYTE(v5)) & (unsigned int)((*((_DWORD *)a1 + 1) >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct _RM_OBJECT_HEADER **)i )
  {
    if ( *(struct _RM_OBJECT_HEADER **)i == a2 )
    {
      *(_QWORD *)i = *(_QWORD *)a2;
      --*(_DWORD *)a1;
      *(_QWORD *)a2 |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)a2 + 6) |= 0x80000000;
  RtlReleaseSRWLockExclusive((char *)a1 + 16);
}
